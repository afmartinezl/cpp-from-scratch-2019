#include <iostream>
#include <conio.h>

struct Nodo{
    char dato;
    Nodo *siguiente;
};

void insertarNodo(Nodo *&front, Nodo *&back, int dato);
void eliminarNodo(Nodo *&front, Nodo *&back, int &dato);
void mostrarNodo(Nodo *&front);
int menu();

int main(){
    menu();
    system("pause");
    return 0;
}

int menu(){
    Nodo *front=NULL, *back=NULL;
    char letra;
    int opciones;
    menu:
    system("cls");
    std::cout<<"\nMENU\n";
    std::cout<<"1.- Insertar caracter a la cola.\n";
    std::cout<<"2.- Mostrar elementos de la cola.\n";
    std::cout<<"3.- Salir.\n";
    std::cin>>opciones;

    switch (opciones)
    {
    case 1: 
    std::cout<<"Por favor ingrese el caracter a guardar en la cola:";
    std::cin>>letra;
    insertarNodo(front, back, letra);
    goto menu;
        break;

    case 2:
    std::cout<<"\nDATOS DE LA COLA\n";
    mostrarNodo(front);
    getch();
    goto menu;
        break;
    
    default: return 0;
        break;
    }
}

void insertarNodo(Nodo *&front, Nodo *&back, int dato){
    Nodo *nuevoNodo= new Nodo();
    nuevoNodo->dato=dato;
    nuevoNodo->siguiente=NULL;
    if (front==NULL)
    {
        front=nuevoNodo;
        back=nuevoNodo;
    }else
    {
        back->siguiente=nuevoNodo;
        back=nuevoNodo;
    }
    std::cout<<"Se inserto un nodo con el dato"<<dato<<"\n";
}

void mostrarNodo(Nodo *&front){
    while (front!=NULL)
    {
        std::cout<<"Dato: "<<front->dato<<"\n";
        front=front->siguiente;
    }   
}

void eliminarNodo(Nodo *&front, Nodo *&back, int &dato){
    dato=front->dato;
    Nodo *aux=front;
    if (front==back)
    {
        front=NULL;
        back=NULL;
    }else{
        front=aux->siguiente;
    }
    delete aux;
    
}