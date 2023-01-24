#include <iostream>

template <class elTipo>
void mostrarNumero(elTipo numero);

int main(){
    int numEntero=5;
    float  numFloat=5.5656;
    double numDouble=54.545454;
    mostrarNumero(numEntero);
    mostrarNumero(numFloat);
    mostrarNumero(numDouble);
    system("pause");
    return 0;
}

template <class elTipo>
void mostrarNumero(elTipo numero){
    std::cout<<"Display any number of type: "<<numero<<"\n";
}