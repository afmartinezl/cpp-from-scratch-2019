#include <iostream>
#include <string.h>

struct Empleados
{
    char nombre[50];
    float salario;
}empleado[3]={{"Juana"},{"Maria"},{"Antonio"}};


int main(){
    char auxNombre[50];
    float auxSalario;
    bool ordenado;
    int ciclos=0;
    std::cout<<"Please enter the following employee data: \n";
    for (int i = 0; i < 3; i++)
    {
        std::cout<<"Salary of the employee "<<empleado[i].nombre<<": ";std::cin>>empleado[i].salario;
    }
    for (int i = 0; i < 3 ; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            if (empleado[j].salario>empleado[j+1].salario)
            {
                strcpy(auxNombre, empleado[j].nombre);
                auxSalario=empleado[j].salario;

                strcpy(empleado[j].nombre, empleado[j+1].nombre);
                empleado[j].salario=empleado[j+1].salario;

                strcpy(empleado[j+1].nombre, auxNombre);
                empleado[j+1].salario=auxSalario;
            }
            ciclos++;
        }
    }
    std::cout<<"Ascending order in "<<ciclos<<" cycles:\n";
    for (int i = 0; i < 3; i++)
    {
        std::cout<<"The employee "<<empleado[i].nombre<<" earns "<<empleado[i].salario<<"\n";
    }
    std::cout<<"Descending order in "<<ciclos<<" cycles:\n";
    for (int i = 2; i >= 0; i--)
    {
        std::cout<<"The employee "<<empleado[i].nombre<<" earns "<<empleado[i].salario<<"\n";
    }
    
    system("pause");
    return 0;
}