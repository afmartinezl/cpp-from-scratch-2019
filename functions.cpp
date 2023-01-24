#include <iostream>

int suma(int a, int b);

int main(){
    int resultado, valorA, valorB;
    std::cout<<"Please enter the value a: "; std::cin>>valorA;
    std::cout<<"Please enter the value b: "; std::cin>>valorB;
    resultado=suma(valorA,valorB);
    std::cout<<"The result of the addition is: "<<resultado<<"\n";
    system("pause");
    return 0;
}

int suma(int valA, int valB){
    int res;
    res=valA+valB;
    return res;
}