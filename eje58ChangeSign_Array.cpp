#include <iostream>

void llenarDatos (int vector[]);
void cambiaSigno (int vector[]);
void mostrarVector (int vector[]);

const int TAM=5;

int main(){
    int vec[TAM];
    llenarDatos(vec);
    cambiaSigno(vec);
    mostrarVector (vec);
    system("pause");
    return 0;
}

void llenarDatos (int vec[]){
    std::cout<<"Please enter the "<<TAM<<" values of the array:\n";
    for (int i = 0; i < TAM; i++)
    {
        std::cout<<"Number "<<i+1<<": "; std::cin>>vec[i];
    }
    
}
void cambiaSigno (int vec[]){
    for (int i = 0; i < TAM; i++)
    {
        vec[i]=vec[i]*(-1);
    }
}

void mostrarVector (int vec[]){
    std::cout<<"The following array has the elements with the sign changed:\n";
    for (int i = 0; i < TAM; i++)
    {
        std::cout<<i+1<<". "<<vec[i]<<"\n";
    }
    
}