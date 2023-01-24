#include <math.h>
#include <iostream>

int main(){
    float n,suma=0,potencia=0;

    do
    {
        std::cout<<"Ingrese un numero mayor a 1: ";
        std::cin>>n;
    } while (n<1);
    for (int i = 1; i <=n; i++)
    {
        potencia=pow(2,i);
        suma+=potencia;
        std::cout<<"2^"<<i<<"+";
    }
    std::cout<<"\nLa sumatoria es: "<<suma<<"\n";
    

    system("pause");
    return 0;
}