#include <iostream>
#include <ctime>

struct Empleados
{
    char nombre[50];
    int anoIngreso;
    int anosTrabajados;
    int diasVacaciones;
}empleado[3]={{"Pepe"},{"Maria"},{"Juan"}};

int main(){
    time_t t=time(NULL);
    tm* timerPtr=localtime(&t);
    int anoActual=timerPtr->tm_year+1900;
    std::cout<<"Please enter the entry year of each employee:\n";
    for (int i = 0; i < 3; i++)
    {
        std::cout<<"Entry year of "<<empleado[i].nombre<<": ";std::cin>>empleado[i].anoIngreso;
        empleado[i].anosTrabajados=anoActual-empleado[i].anoIngreso;
        switch (empleado[i].anosTrabajados)
        {
        case 0 ... 3: empleado[i].diasVacaciones=30; break;
        case 4 ... 10: empleado[i].diasVacaciones=105; break;
        case 11 ... 100: empleado[i].diasVacaciones=150; break;
        }
    }
    std::cout<<"\n\nDIAS DE VACACIONES POR EMPLEADO\n\n";
    for (int i = 0; i < 3; i++)
    {
        std::cout<<"Al empleado "<<empleado[i].nombre<<" le corresponden "<<empleado[i].diasVacaciones<<" dias de vacaciones.\n";
    }
    
    system("pause");
    return 0;
}