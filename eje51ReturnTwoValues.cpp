#include <iostream>
int *calculaRetorno(int,int);
int main(){
    int num1,num2,suma=0,mul=0;
    std::cout<<"Please enter the first number: "; std::cin>>num1;
    std::cout<<"Please enter the second number: "; std::cin>>num2;
    int *resultado = calculaRetorno(num1,num2); 
    suma=resultado[0];
    mul=resultado[1];
    std::cout<<"La suma es: "<<suma<<"\n";
    std::cout<<"La multiplicacion es: "<<mul<<"\n";
    system("pause");
    return 0;
}

int *calculaRetorno(int num1, int num2){
    int suma=num1+num2;
    int mul=num1*num2;
    int *resultado;
    resultado[0]=suma;
    resultado[1]=mul;
    return resultado;
}