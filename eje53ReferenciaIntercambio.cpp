#include <iostream>

void intercambio (int&, int&);

int main(){
    int num1,num2;
    std::cout<<"Please enter the first number: "; std::cin>>num1;
    std::cout<<"Please enter the second number: "; std::cin>>num2;
    intercambio (num1,num2);
    std::cout<<"The altered values are: \n";
    std::cout<<"First number: "<<num1<<"\n";
    std::cout<<"Second number: "<<num2<<"\n";
    system("pause");
    return 0;
}

void intercambio (int & num1,int & num2){
    int aux;
    aux=num1;
    num1=num2;
    num2=aux;

}