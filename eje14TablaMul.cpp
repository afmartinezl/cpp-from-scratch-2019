#include <iostream>

int main(){
    int numero;
    do{
    std::cout<<"Digite un numero del 1 al 10: ";
    std::cin>>numero;
        if(numero<1 || numero>10){
            std::cout<<"Tonto, digite un numero entre 1 y 10\n";
        }
    }while(numero<1 || numero>10);
    std::cout<<"\n\n";
    for (int i=1;i<=10;i++){
        std::cout<<i<<" x "<<numero<<" = "<<i*numero<<"\n";
    }
    system("pause");
    return 0;
}