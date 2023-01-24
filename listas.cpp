#include <iostream>
struct Nodo{
    int dato;
    Nodo *siguiente;
};
void insertarNodoLista(Nodo *&lista, int dato);
void mostrarNodoLista(Nodo *&lista);
bool buscarNodoLista(Nodo *&lista, int buscar);

int main(){
    Nodo *lista=NULL;
    insertarNodoLista(lista,5);
    insertarNodoLista(lista,6);
    insertarNodoLista(lista,4);
    insertarNodoLista(lista,9);
    insertarNodoLista(lista,3);
    mostrarNodoLista(lista);
    buscarNodoLista(lista, 3);
    system("pause");
    return 0;
}
void insertarNodoLista(Nodo *&lista, int dato){
    Nodo *nuevoNodo= new Nodo();
    nuevoNodo->dato=dato;
    Nodo *aux1=lista;
    Nodo *aux2;
    while ( (aux1!=NULL) && (aux1->dato<dato))
    {
        aux2=aux1;
        aux1=aux1->siguiente;
    }
    if (lista==aux1){
        lista=nuevoNodo;
        nuevoNodo->siguiente=aux1;
    }else{
        aux2->siguiente=nuevoNodo;
        nuevoNodo->siguiente=aux1;
    }
    std::cout<<"El dato "<<dato<<" se ha insertado exitosamente.\n";
}

void mostrarNodoLista(Nodo *&lista){
    Nodo *actual=new Nodo();
    actual=lista;
    while (actual!=NULL)
    {
        std::cout<<"Valor del nodo es "<<actual->dato<<"\n";
        actual=actual->siguiente;
    }
    
}

bool buscarNodoLista(Nodo *&lista, int buscar){
    bool encontrado=false;
    Nodo *actual= new Nodo();
    actual=lista;
    while ((actual!=NULL) && (actual->dato<=buscar))
    {
        if (actual->dato==buscar)
        {
            encontrado=true;
        }
        actual=actual->siguiente;
    }
    return encontrado;
}