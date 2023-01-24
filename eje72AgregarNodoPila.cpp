#include <iostream>

struct Nodo
{
    int dato;
    Nodo *siguiente;
};

void nuevoNodo(Nodo *&pila, int numero);
void mostrarNodos(Nodo *&pila);

int main(){
    Nodo *pila=NULL;
    int n;
    char respuesta;
    do
    {
        std::cout<<"Ingrese un numero: "; std::cin>>n;
        nuevoNodo(pila,n);
        std::cout<<"Desea ingresar mas datos? (s/n)"; std::cin>>respuesta;
    } while (respuesta=='s' || respuesta=='S');
    std::cout<<"\nDatos de la pila\n";
    mostrarNodos(pila);
    
    system("pause");
    return 0;
}

void nuevoNodo(Nodo *&pila, int numero){
    Nodo *nodoNuevo= new Nodo();
    nodoNuevo->dato=numero;
    nodoNuevo->siguiente=pila;
    pila=nodoNuevo;
    std::cout<<"El dato "<<numero<<" fue insertado exitosamente\n";
}

void mostrarNodos(Nodo *&pila){
    while (pila!=NULL)
    {
        std::cout<<pila->dato<<"\n";
        pila=pila->siguiente;
    }
}