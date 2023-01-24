/*ESTE PROGRAMA:
Inserta nodos en una lista (sin ordenar)
Busca el mayor y el menor número de la lista con un solo bucle
Muestra los elementos de la lista*/

#include <iostream>
struct Nodo{
    int dato;
    Nodo *siguiente;
};

void insertarNodo(Nodo *&lista, int dato);
void mostrarNodos(Nodo *&lista);
void buscarMayorMenorNodos(Nodo *&lista, int &mayor, int &menor);

int main(){
    int numero,mayor,menor;
    char respuesta;
    Nodo *lista=NULL;
    do
    {
    std::cout<<"Ingrese un numero: "; std::cin>>numero;
    insertarNodo(lista, numero);
    std::cout<<"Desea ingresar mas numeros (s/n): "; std::cin>>respuesta;
    } while (respuesta=='s' || respuesta=='S');
    mostrarNodos(lista);
    buscarMayorMenorNodos(lista,mayor,menor);
    std::cout<<"El mayor numero de la lista es: "<<mayor<<" \n";
    std::cout<<"El menor numero de la lista es: "<<menor<<" \n";
    system("pause");
    return 0;
}

void insertarNodo(Nodo *&lista, int dato){
    Nodo *nuevoNodo=new Nodo();
    Nodo *aux;
    nuevoNodo->dato=dato;
    nuevoNodo->siguiente=NULL;
    if (lista==NULL){
        lista=nuevoNodo;
    }else{
        aux=lista;
        while (aux->siguiente!=NULL){
            aux=aux->siguiente;
        }
        aux->siguiente=nuevoNodo;
    }
    std::cout<<"Se inserto el nodo "<<dato<<"\n";
}

void mostrarNodos(Nodo *&lista){
    Nodo *clon=new Nodo();
    clon=lista;
    while (clon!=NULL){
        std::cout<<"Dato: "<<clon->dato<<"\n";
        clon=clon->siguiente;
    }
    
}

void buscarMayorMenorNodos(Nodo *&lista, int &mayor, int &menor){
    int auxMayor=0,auxMenor=99999;
    while (lista!=NULL){
        if (lista->dato > auxMayor)
        {
            auxMayor=lista->dato;
        }
        if (lista->dato < auxMenor)
        {
            auxMenor=lista->dato;
        }
        lista=lista->siguiente;
    }
    mayor=auxMayor;
    menor=auxMenor;
}