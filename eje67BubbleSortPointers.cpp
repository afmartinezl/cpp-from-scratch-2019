#include <iostream>
#include <stdlib.h>
//Variables
int *numbers,size,aux,ciclos=0;
bool ordenado=false;
//Funciones-prototipo
void pedirDatos();
void ordenarDatos();
void mostrarDatos();

int main(){    
    pedirDatos();
    ordenarDatos();
    mostrarDatos();
    delete[] numbers;
    system("pause");
    return 0;
}

void pedirDatos(){
    sizeagain:
    std::cout<<"Please enter the size of your array: \n"; std::cin>>size;
    if (size<1)
    {
        std::cout<<size<<" is not a valid size for the array. Please enter a positive integer greather than 1.\n";
        goto sizeagain;
    }
    numbers=new int[size];
    std::cout<<"Please enter the numbers for the array: \n";
    for (int i = 0; i < size; i++)
    {
        std::cout<<"Enter the number "<<i+1<<": "; std::cin>>*(numbers+i);
    }
}

void ordenarDatos(){
    for (int i = 0; i < size && ordenado==false; i++)
    {
        ordenado=true;
        for (int j = 0; j < size-1; j++)
        {
            if (numbers[j]>numbers[j+1])
            {
                ordenado=false;
                aux=*(numbers+j);
                *(numbers+j)=*(numbers+j+1);
                *(numbers+j+1)=aux;
            }
            ciclos++;
        }
        
    }
}

void mostrarDatos(){
    std::cout<<"Ascending order in "<<ciclos<<" cycles:\n";
    for (int i = 0; i < size; i++)
    {
        std::cout<<*(numbers+i)<<"\n";
    }
    std::cout<<"Descending order in "<<ciclos<<" cycles:\n";
    for (int i = size-1; i >= 0; i--)
    {
        std::cout<<*(numbers+i)<<"\n";
    }
}
