#include <iostream>
struct Nodo{
    int dato;
    Nodo *siguiente;
};
void insertarNodoLista(Nodo *&lista, int dato);
void mostrarNodoLista(Nodo *&lista);
bool buscarNodoLista(Nodo *&lista, int buscar);
bool eliminarNodoLista(Nodo *&lista, int datoBorrar);

int main(){
    int dato, numeroEliminar;
    char respuesta;
    Nodo *lista=NULL;
    do
    {
        std::cout<<"Ingresa un dato en la lista: "; std::cin>>dato;
        insertarNodoLista(lista,dato);
        std::cout<<"Deseas insertar otro dato? (s/n): "; std::cin>>respuesta;
    } while (respuesta=='s' || respuesta=='S');
    mostrarNodoLista(lista);
    //Buscar dato
    std::cout<<"\nNumero a buscar: "; std::cin>>dato;
    if (buscarNodoLista(lista,dato)==true){
        std::cout<<"El valor "<<dato<<" si esta en la lista!\n";
    }else{
        std::cout<<"El valor "<<dato<<" no esta en la lista!\n";
    }    
    //Eliminar dato
    std::cout<<"Numero a eliminar: "; std::cin>>numeroEliminar;
    if (eliminarNodoLista(lista, numeroEliminar)==true){
        std::cout<<"El numero "<<numeroEliminar<<" ha sido eliminado de la lista!\n";
    }else{
        std::cout<<"El numero "<<numeroEliminar<<" no ha sido encontrado!\n";
    }
    
    mostrarNodoLista(lista);
    
    system("pause");
    return 0;
}
void insertarNodoLista(Nodo *&lista, int dato){
    Nodo *nuevoNodo= new Nodo();
    nuevoNodo->dato=dato;
    Nodo *aux1=lista;
    Nodo *aux2;
    while ( (aux1!=NULL) && (aux1->dato<dato)){
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
    while (actual!=NULL){
        std::cout<<"Valor del nodo es "<<actual->dato<<"\n";
        actual=actual->siguiente;
    }
    
}

bool buscarNodoLista(Nodo *&lista, int buscar){
    bool encontrado=false;
    Nodo *actual= new Nodo();
    actual=lista;
    while ((actual!=NULL) && (actual->dato<=buscar)){
        if (actual->dato==buscar){
            encontrado=true;
        }
        actual=actual->siguiente;
    }
    return encontrado;
}

bool eliminarNodoLista(Nodo *&lista, int datoBorrar){
    bool encontrado=false;
    if (lista!=NULL){
        Nodo *aux=lista, *anterior=NULL;
        while ((aux!=NULL)&&(aux->dato!=datoBorrar)){
            anterior=aux;
            aux=aux->siguiente;
        }
        if (aux==NULL){
            encontrado=false;
        }else if (anterior==NULL){
            lista=lista->siguiente;
            delete aux;
            encontrado=true;
        }else{
            anterior->siguiente=aux->siguiente;
            delete aux;
            encontrado=true;
        }
    }
    return encontrado;
}