#include <iostream>

using namespace std;

int main(){
    int arreglo[100],tamano,mayor=0;
    do
    {
       cout<<"Ingrese el tamano del arreglo: ";
       cin>>tamano;
    } while ((tamano<1) || (tamano>100));

    for (int i = 0; i < tamano; i++)
    {
        cout<<"Ingrese el valor del elemento "<<i+1<<": ";
        cin>>arreglo[i];
    }

    for (int j = 0; j < tamano; j++)
    {
        if (arreglo[j]>mayor)
        {
            mayor=arreglo[j];
        }
        
    }
    cout<<"El mayor numero del arreglo es: "<<mayor<<"\n\n";

    system("pause");
    return 0;
}