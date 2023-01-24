#include <iostream>

struct Empleados
{
    char id[6];
    char nombre[60];
}empleado[2];

int main(){
    bool esNumero=true;
    std::cout<<"Please enter the employee data (the id must contain at least 6 numbers): ";
    for (int i = 0; i < 2; i++)
    {
        regresa:
        esNumero=true;
        std::cout<<"Employee "<<i+1<<" id: "; std::cin>>empleado[i].id;
        for (int j = 0; j < 6; j++)
        {
            if (int(empleado[i].id[j])<=47 || int(empleado[i].id[j])>=58)
            {
                esNumero=false;
                std::cout<<"The id "<<empleado[i].id<<" is not valid, please try again.\n";
                goto regresa;
            }
            
        }
        std::cout<<"Employee "<<i+1<<" name: "; std::cin>>empleado[i].nombre;
    }
    std::cout<<"\n";
    for (int i = 0; i < 2; i++)
    {
        std::cout<<"Id: "<<empleado[i].id<<"\n";
        std::cout<<"Name: "<<empleado[i].nombre<<"\n";
        std::cout<<"\n";
        
    }
    

    system("pause");
    return 0;
}