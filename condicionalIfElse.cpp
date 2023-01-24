#include <iostream>

int main(){
    int numeroIngresado, numeroAencontrar=5;
    std::cout<<"Ingresa un numero mayor o igual al que estoy pensando: ";
    std::cin>>numeroIngresado;
    if (numeroIngresado<numeroAencontrar){
    std::cout<<"Sigue intentando\n";
    }
    else{
    std::cout<<"Adivinaste\n";
    }

    system("pause");
    return 0;
}