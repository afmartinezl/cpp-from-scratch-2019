#include <iostream>

void cambiaValor(int&, int&);

int main(){
    int num1,num2;
    std::cout<<"Please enter the value of num1: "; std::cin>>num1;
    std::cout<<"Please enter the value of num2: "; std::cin>>num2;
    std::cout<<"TYPED VALUES\n"; 
    std::cout<<"num1: "<<num1<<"\n"; 
    std::cout<<"num2: "<<num2<<"\n"; 
    cambiaValor(num1,num2);
    std::cout<<"CHANGED VALUES\n"; 
    std::cout<<"num1: "<<num1<<"\n"; 
    std::cout<<"num2: "<<num2<<"\n";
    system("pause");
    return 0;
}

void cambiaValor(int& val1, int& val2){
    val1=10;
    val2=20;

}