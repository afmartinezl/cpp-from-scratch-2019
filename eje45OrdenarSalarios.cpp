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
    for (int i = 0; i < 3 && ordenado==false; i++)
    {
        ordenado=true;
        for (int j = 0; j < 2; j++)
        {
            if (empleado[j].salario>empleado[j+1].salario)
            {
                ordenado=false;
                auxSalario=empleado[j].salario;
                empleado[j].salario=empleado[j+1].salario;
                empleado[j+1].salario=auxSalario;
            }
            ciclos++;
        }
    }
    std::cout<<"Ascending order in "<<ciclos<<" cycles:\n";
    for (int i = 0; i < 3; i++)
    {
        std::cout<<empleado[i].salario<<"\n";
    }
    std::cout<<"Descending order in "<<ciclos<<" cycles:\n";
    for (int i = 2; i >= 0; i--)
    {
        std::cout<<empleado[i].salario<<"\n";
    }
    
    system("pause");
    return 0;
}