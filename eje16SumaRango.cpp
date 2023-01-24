#include <iostream>

int main(){
    /*int numero=0,suma=0;
    do
    {
        std::cout<<"Digite un numero entero (el rango de 100 a 200 o cero, cierran el programa)";
        std::cin>>numero;
        suma=suma+numero;
        std::cout<<"\nAquí está la sumatoria: "<<suma<<"\n";
    } while (((numero<100) || (numero>200) && (numero!=0)));*/

    int numero,suma=0;
    do
    {
        std::cout<<"Ingresa un numero mayor a 1: ";
        std::cin>>numero;
    } while (numero<=1);
    for (int i = 0; i <= numero; i++)
    {
        suma+=i;
        std::cout<<i<<" + ";
    }
    
    std::cout<<"\nAquí esta tu suma: "<<suma<<"\n";
   
    
    system("pause");
    return 0;
}