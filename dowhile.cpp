#include <iostream>

int main(){
    char letra;
    do{
        std::cout<<"Humano presiona la letra a: ";
        std::cin>>letra;
    }
    while (letra == 'a');
        std::cout<<"Humano estupido, te dije que presionaras la letra a";
    

    system("pause");
    return 0;
}