#include <iostream>

void cuadrado (int vector[]);
void mostrarCuadrado (int vector[]);

const int TAM=5;

int main(){
    int vec[TAM];
    std::cout<<"Please enter the "<<TAM<<" values of the array:\n";
    for (int i = 0; i < TAM; i++)
    {
        std::cout<<"Number "<<i+1<<": "; std::cin>>vec[i];
    }
    cuadrado(vec);
    mostrarCuadrado(vec);
    system("pause");
    return 0;
}

void cuadrado (int vector[]){
    for (int i = 0; i < TAM; i++)
    {
        vector[i]=vector[i]*vector[i];
    }
    
}
void mostrarCuadrado (int vector[]){
    std::cout<<"The squared values of the array are:\n";
    for (int i = 0; i < TAM; i++)
    {
        std::cout<<"Number "<<i+1<<": "<<vector[i]<<"\n";
    }
    
}