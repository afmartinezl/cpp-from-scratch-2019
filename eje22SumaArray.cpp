#include <iostream>

using namespace std;

int main(){
    int size, suma=0;
    cout<<"Especifique el tamaño de su arreglo: ";
    cin>>size;
    int arreglo[size];

    for (int i = 0; i < size; i++)
    {
        cout<<"\nIngrese el elemento "<<i+1<<" de su arreglo: ";
        cin>>arreglo[i];
    }

    for (int j = 0; j < size; j++)
    {
        suma+=arreglo[j];
    }

    cout<<"\nLa suma de los elementos de su arreglo es: "<<suma<<"\n";
   
    system("pause");
    return 0;
}