#include <iostream>

struct Nodo
{
    int dato;
    Nodo *siguiente;
};

void insertaNodo(Nodo *&pila, int n);
void quitarNodo(Nodo *&pila, int &n);

int main(){
    Nodo *pila=NULL;
    int numero;
    insertaNodo(pila,5);
    insertaNodo(pila,6);
    insertaNodo(pila,02);
    insertaNodo(pila,07);
    insertaNodo(pila,9);
    insertaNodo(pila,13);
    while (pila!=NULL)
    {
        quitarNodo(pila,numero);
        if (pila!=NULL){
            std::cout<<numero<<" ,";
        }else
        {
            std::cout<<numero<<" .\n";
        }
    }
    system("pause");
    return 0;
}

void insertaNodo(Nodo *&pila, int n){
    Nodo *nuevoNodo= new Nodo();
    nuevoNodo->dato=n;
    nuevoNodo->siguiente=pila;
    pila=nuevoNodo;
    std::cout<<"El dato "<<n<<" fue insertado exitosamente\n";
}

void quitarNodo(Nodo *&pila, int &n){
    Nodo *aux=pila;
    n=aux->dato;
    pila=aux->siguiente;
    delete aux;
}

void mostrarNodo(Nodo *&pila){
    while (pila!=NULL)
    {
        std::cout<<pila->dato<<"\n";
        pila=pila->siguiente;
    }
    
}