#include <iostream>

struct Nodo{
    int dato;
    Nodo *siguiente;
};

void insertarNodo(Nodo *&front, Nodo *&back, int dato);
void eliminarNodo(Nodo *&front, Nodo *&back, int &dato);
void mostrarNodo(Nodo *&front);

int main(){
    Nodo *front=NULL;
    Nodo *back=NULL;
    int dato;
    insertarNodo(front,back,5);
    insertarNodo(front,back,6);
    insertarNodo(front,back,7);
    //mostrarNodo(front);
    while (front!=NULL)
    {
        eliminarNodo(front,back,dato);
        std::cout<<"Se ha eliminado el nodo con el dato"<<dato<<"\n";
    }
    system("pause");
    return 0;
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