#include <iostream>

int main(){
    int a,b,aux;
    std::cout<<"Escriba los valores solicitados:\n";
    std::cout<<"Valor de a: "; std::cin>>a;
    std::cout<<"Valor de b: "; std::cin>>b;

    aux=a;
    a=b;
    b=aux;

    std::cout<<"Los valores intercambiados son:\n";
    std::cout<<"Valor de a: "<<a<<"\n";
    std::cout<<"Valor de b: "<<b<<"\n";

    system("pause");
    return 0;
}