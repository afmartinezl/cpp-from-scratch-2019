#include <iostream>
#include <time.h>

int main(){
    int numero,aleatorio,contador=0;
    char nombre[20];
    srand(time(NULL));
    aleatorio=1+rand()%100;
    std::cout<<"Ingrese el nombre del jugador: \n";
    std::cin>>nombre;
    do
    {
        std::cout<<"Ingrese un numero entre 1 y 100: \n";
        std::cin>>numero;
        if(numero<aleatorio){
            std::cout<<"El numero ingresado es menor que el objetivo\n";
        }
        if(numero>aleatorio){
            std::cout<<"El numero ingresado es mayor que el objetivo\n";
        }
        contador++;
    } while (numero != aleatorio);
    std::cout<<"\nFelicidades @"<<nombre<<", haz adivinado el pinche numero!!!\n";
    std::cout<<"Numero de intentos: "<<contador<<"\n";
    
    system("pause");
    return 0;
}