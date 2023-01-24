#include <iostream>

struct Empleados
{
    char nombre[30];
    float salario;
    int edad;
}empleado[3],*empleadoPuntero=empleado;

void pedirDatos();
void elMayor();

int main(){
    pedirDatos();
    elMayor();
    system("pause");
    return 0;
}


void pedirDatos(){
    std::cout<<"Please enter the information of the three employees:\n";
    for (int i = 0; i < 3; i++)
    {
        std::cout<<"Name "<<i+1<<": "; std::cin>>(empleadoPuntero+i)->nombre;
        std::cout<<"Salary "<<i+1<<": "; std::cin>>(empleadoPuntero+i)->salario;
        std::cout<<"Age "<<i+1<<": "; std::cin>>(empleadoPuntero+i)->edad;
    }   
}

void elMayor(){
    int mayor=0, pos=0;
    for (int i = 0; i < 3; i++)
    {
        if ((empleadoPuntero+i)->edad>mayor)
        {
            mayor=(empleadoPuntero+i)->edad;
            pos=i;
        }
    }
    std::cout<<"The oldest employee is:\n";
    std::cout<<"Name: "<<(empleadoPuntero+pos)->nombre;
    std::cout<<"Salary: "<<(empleadoPuntero+pos)->salario;
    std::cout<<"Age: "<<(empleadoPuntero+pos)->edad;
}