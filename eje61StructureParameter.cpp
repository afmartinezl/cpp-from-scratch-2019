#include <iostream>

struct Empleado
{
    int numero;
    char nombre[50];
}e1;

void pedirDatos (Empleado& e);
void mostrarDatos (Empleado& e);

int main(){
    pedirDatos(e1);
    mostrarDatos(e1);
    system("pause");
    return 0;
}

void pedirDatos (Empleado& e){
    std::cout<<"Please enter the data of the employee:\n";
    std::cout<<"Number of the employee: ";std::cin>>e.numero;
    std::cout<<"Name of the employee: ";std::cin>>e.nombre;
}

void mostrarDatos (Empleado& e){
    std::cout<<"The data of the employee is the following:\n";
    std::cout<<"Number: "<<e.numero<<"\n";
    std::cout<<"Name: "<<e.nombre<<"\n";
}