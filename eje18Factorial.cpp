#include <iostream>

int main(){
    long int numero, factorial=1;

    do{
    std::cout<<"Ingrese un número mayor o igual a 1: ";
    std::cin>>numero;}
    while (numero<1);
    for (long int i = 1; i <= numero; i++)
    {
        factorial=factorial*i;
        std::cout<<i<<" * ";
    }
    std::cout<<"\nEl resultado del factorial es: "<<factorial<<"\n";
    
    system("pause");
    return 0;
}