#include <iostream>

struct Nodo
{
    int dato;
    Nodo *izq;
    Nodo *der;
    Nodo *padre;
};

Nodo *arbol=NULL;
Nodo *crearNodo(int dato, Nodo *padre);
void insertarNodo(Nodo *&arbol, int dato, Nodo *padre);
void menu();
void mostrarArbol(Nodo *&arbol, int cont);
bool buscarNodoArbol(Nodo *&arbol, int numBuscar);
void preorden(Nodo *&arbol);
void inorden(Nodo *&arbol);
void postorden(Nodo *&arbol);
void buscarParaEliminar(Nodo *&arbol, int numeroEliminar);
void eliminarNodo(Nodo *&arbol);
Nodo *minimoNodo(Nodo *&arbol);
void reemplazarNodo(Nodo *arbol, Nodo *nuevo);
void destruirNodo (Nodo *NodoDestruir);

int main(){
    menu();
    system("pause");
    return 0;
}

void menu(){
    int opcion,dato;
    menu:
    system("cls");
    std::cout<<"\tMENU\n";
    std::cout<<"1.- Insertar un nodo\n";
    std::cout<<"2.- Mostrar arbol\n";
    std::cout<<"3.- Buscar un nodo en el arbol\n";
    std::cout<<"4.- Recorrer arbol en preorden\n";
    std::cout<<"5.- Recorrer arbol en inorden\n";
    std::cout<<"6.- Recorrer arbol en postorden\n";
    std::cout<<"7.- Ingresar datos de ejemplo\n";
    std::cout<<"8.- Eliminar nodo\n";
    std::cout<<"9.- Salir\n";
    std::cout<<""; std::cin>>opcion;

    switch (opcion)
    {
    case 1:
        std::cout<<"Ingresa el numero del nodo a insertar: "; std::cin>>dato;
        insertarNodo(arbol,dato,NULL);
        system("pause");
        goto menu;
        break;

    case 2:
        std::cout<<"\n\tARBOL\n";
        mostrarArbol(arbol,0);
        std::cout<<"\n";
        system("pause");
        goto menu;
        break;
    case 3:
        std::cout<<"Ingrese el numero a buscar en el arbol: ";
        std::cin>>dato;
        if (buscarNodoArbol(arbol,dato)==true){
            std::cout<<"\nEl dato "<<dato<<" fue encontrado en el arbol!\n";
        }else{
            std::cout<<"\nEl dato "<<dato<<" no fue encontrado en el arbol.\n";
        }
        system("pause");
        goto menu;
        break;
    case 4: 
        std::cout<<"\t ARBOL EN PREORDEN\n";
        preorden(arbol);
        std::cout<<"\n";
        system("pause");
        goto menu;
        break;
    case 5: 
        std::cout<<"\t ARBOL EN INORDEN\n";
        inorden(arbol);
        std::cout<<"\n";
        system("pause");
        goto menu;
        break;
    case 6: 
        std::cout<<"\t ARBOL EN POSTORDEN\n";
        postorden(arbol);
        std::cout<<"\n";
        system("pause");
        goto menu;
        break;
    case 7:
        insertarNodo(arbol,10,NULL);
        insertarNodo(arbol,5,NULL);
        insertarNodo(arbol,3,NULL);
        insertarNodo(arbol,8,NULL);
        insertarNodo(arbol,6,NULL);
        insertarNodo(arbol,9,NULL);
        insertarNodo(arbol,7,NULL);
        insertarNodo(arbol,15,NULL);
        insertarNodo(arbol,12,NULL);
        insertarNodo(arbol,20,NULL);
        insertarNodo(arbol,30,NULL);
        system("pause");
        goto menu;
        break;
    case 8:
        std::cout<<"Ingrese el nodo a eliminar: "; std::cin>>dato;
        buscarParaEliminar(arbol,dato);
        system("pause");
        goto menu;
        break;
    default:
        break;
    }
}

Nodo *crearNodo(int dato, Nodo *padre){
    Nodo *nuevoNodo=new Nodo();
    nuevoNodo->dato=dato;
    nuevoNodo->padre=padre;
    nuevoNodo->izq=NULL;
    nuevoNodo->der=NULL;
}

void insertarNodo(Nodo *&arbol, int dato, Nodo *padre){
if(arbol==NULL){
    Nodo *nuevoNodo=crearNodo(dato, padre);
    arbol=nuevoNodo;
}else{
    int valorRaiz=arbol->dato;
    if (dato<valorRaiz){
        insertarNodo(arbol->izq,dato,arbol);
    }else{
        insertarNodo(arbol->der,dato,arbol);
    }
}
}

void mostrarArbol(Nodo *&arbol, int cont){
    if (arbol==NULL){
        return;
    }else{
        mostrarArbol(arbol->der,cont+1);
        for (int i = 0; i < cont; i++)
        {
            std::cout<<"         ";
        }
        std::cout<<arbol->dato<<"\n";
        mostrarArbol(arbol->izq,cont+1);
    }
    
    
}

bool buscarNodoArbol(Nodo *&arbol, int numBuscar){
    if(arbol==NULL){
        return false;
    }else if(arbol->dato==numBuscar){
        return true;
    }else if(numBuscar<arbol->dato){
        return buscarNodoArbol(arbol->izq, numBuscar);
    }else{
        return buscarNodoArbol(arbol->der, numBuscar);
    }
}

void preorden(Nodo *&arbol){
    if(arbol==NULL){
        return;
    }else{
        std::cout<<arbol->dato<<" - ";
        preorden(arbol->izq);
        preorden(arbol->der);
    }
}

void inorden(Nodo *&arbol){
    if(arbol==NULL){
        return;
    }else{
        inorden(arbol->izq);
        std::cout<<arbol->dato<<" - ";
        inorden(arbol->der);
    }
}

void postorden(Nodo *&arbol){
    if(arbol==NULL){
        return;
    }else{
        postorden(arbol->izq);
        postorden(arbol->der);
        std::cout<<arbol->dato<<" - ";
    }
}

void buscarParaEliminar(Nodo *&arbol, int numeroEliminar){
    if(arbol==NULL){
        return;
    }else if(numeroEliminar < arbol->dato){
        buscarParaEliminar(arbol->izq,numeroEliminar);
    }else if(numeroEliminar > arbol->dato){
        buscarParaEliminar(arbol->der,numeroEliminar);
    }else{
        eliminarNodo(arbol); 
    }
}

void eliminarNodo(Nodo *&arbol){
    if(arbol->izq && arbol->der){//si hay subnodo izq y der
        Nodo *minimo=minimoNodo(arbol->der);
        arbol->dato=minimo->dato;
        eliminarNodo(minimo);
    }else if (arbol->izq){//si hay subnodo izq
        reemplazarNodo(arbol,arbol->izq);
    }else if (arbol->der){//si hay subnodo der
        reemplazarNodo(arbol,arbol->der);
    }else{//si no hay subnodo
        reemplazarNodo(arbol,NULL);
    }
    
}

void reemplazarNodo(Nodo *arbol, Nodo *nuevo){
    if (arbol->padre){
        if (arbol->padre->izq!=NULL){
            if (arbol->dato==arbol->padre->izq->dato){
            arbol->padre->izq=nuevo;
            }
        }
        if (arbol->padre->der!=NULL){
            if (arbol->dato==arbol->padre->der->dato){
            arbol->padre->der=nuevo;
            }
        }
    }
    if (nuevo){
        nuevo->padre=arbol->padre;
    }
    destruirNodo(arbol);
}

void destruirNodo (Nodo *NodoDestruir){
    NodoDestruir->izq=NULL;
    NodoDestruir->der=NULL;
    NodoDestruir->padre=NULL;
    delete NodoDestruir;
}

Nodo *minimoNodo(Nodo *&arbol){
    if (arbol==NULL)
    {
        return NULL;
    }else if (arbol->izq){
        return minimoNodo(arbol->izq);
    }else{
        return arbol;
    }
    
    
}
