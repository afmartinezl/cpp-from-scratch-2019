#include <iostream>

struct Nodo
{
    int dato;
    Nodo *siguiente;
};

void insertaNodo(Nodo *&pila, int n);
void quitarNodo(Nodo *&pila, int &n);
void mostrarNodo(Nodo *&pila);

int main(){
    Nodo *pila=NULL;
    int numero,nElementos,elemento;
    std::cout<<"Cuantos elementos deseas insertar: "; std::cin>>nElementos;
    for (int i = 0; i < nElementos; i++)
    {
        std::cout<<"Elemento "<<i+1<<": "; std::cin>>elemento;
        insertaNodo(pila,elemento);
    }
    mostrarNodo(pila);
    while (pila!=NULL)
    {
        quitarNodo(pila,numero);
    }
    mostrarNodo(pila);
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