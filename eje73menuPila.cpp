#include <iostream>
#include <conio.h>

struct Nodo
{
    char dato;
    Nodo *siguiente;
};

void nuevoNodo(Nodo *&pila, char dato);
void mostrarNodos(Nodo *&pila);
int menu();

int main(){
    menu();
    system("pause");
    return 0;
}
int menu(){
    Nodo *pila=NULL;
    char letra;
    int opciones;
    menu:
    system("cls");
    std::cout<<"\nMENU\n";
    std::cout<<"1.- Insertar caracter a la pila.\n";
    std::cout<<"2.- Mostrar elementos de la pila.\n";
    std::cout<<"3.- Salir.\n";
    std::cin>>opciones;

    switch (opciones)
    {
    case 1: 
    std::cout<<"Por favor ingrese el caracter a guardar en la pila:";
    std::cin>>letra;
    nuevoNodo(pila, letra);
    goto menu;
        break;

    case 2:
    std::cout<<"\nDATOS DE LA PILA\n";
    mostrarNodos(pila);
    getch();
    goto menu;
        break;
    
    default: return 0;
        break;
    }
}
void nuevoNodo(Nodo *&pila, char dato){
    Nodo *nodoNuevo= new Nodo();
    nodoNuevo->dato=dato;
    nodoNuevo->siguiente=pila;
    pila=nodoNuevo;
    std::cout<<"El dato "<<dato<<" fue insertado exitosamente\n";
}

void mostrarNodos(Nodo *&pila){
    while (pila!=NULL)
    {
        std::cout<<pila->dato<<"\n";
        pila=pila->siguiente;
    }
}