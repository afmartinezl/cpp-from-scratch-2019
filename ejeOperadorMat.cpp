#include <iostream>

int main (){
    float n1,n2,suma,resta,mul;
    float div;
    std::cout << "Por favor escriba el primer número:";
    std::cin >> n1;
    std::cout << "Por favor escriba el segundo número:";
    std::cin >> n2;
    suma = n1+n2;
    resta = n1-n2;
    mul = n1*n2;
    div = n1/n2;
    std::cout << "El resultado de la suma es:"<<suma<<"\n";
    std::cout << "El resultado de la resta es:"<<resta<<"\n";
    std::cout << "El resultado de la multiplicacion es:"<<mul<<"\n";
    std::cout << "El resultado de la division es:"<<div<<"\n";

    system("pause");
    return 0;
}