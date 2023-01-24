#include <iostream>
#include <math.h>

int main(){
    float x,y,res,yCuadradaMenosUno;
    std::cout<<"Humano, digita lo que se te pida:\n";
    std::cout<<"Valor de x: "; std::cin>>x;
    ingresaYdenuevo:
    std::cout<<"Valor de y: "; std::cin>>y;
    yCuadradaMenosUno = (pow(y,2)-1);

    if (yCuadradaMenosUno==0){
        std::cout<<"Idiota! El valor de y no es valido, ingresalo de nuevo:\n";
        goto ingresaYdenuevo;
    }


    res = (sqrt(x)) / (pow(y,2)-1);
    std::cout<<"Humano, tu pinche resultado es:"<<res<<"\n";
    system("pause");
    return 0;
}