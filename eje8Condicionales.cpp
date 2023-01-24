#include <iostream>

int main(){
    int n1,n2;
    std::cout<<"Humano, escribe dos números: ";
    std::cin>>n1>>n2;
    if(n1==n2){
        std::cout<<"Los dos numeros son iguales\n";
    }
    else if(n1>n2){
        std::cout<<"El numero 1 es mayor\n";
    }else{
        std::cout<<"El numero 2 es mayor\n";
    }
    
    system("pause");
    return 0;
}