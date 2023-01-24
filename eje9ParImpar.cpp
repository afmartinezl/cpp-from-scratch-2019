#include <iostream>

int main(){
    int numero;
    std::cout<<"Ingrese un número entero: "; std::cin>>numero;
    if (numero%2==0)
    {
        std::cout<<"Tu numero "<<numero<<" es par\n";
    }else{
        std::cout<<"Tu numero "<<numero<<"es impar\n";
    }
    

    system("pause");
    return 0;
}