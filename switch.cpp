#include <iostream>

int main(){
    int numero;
    regresar:
    std::cout<<"\nIngresa un numero entre 1 y 5, o 6 para terminar: ";
    std::cin>>numero;

    switch (numero)
    {
    case 1:
        std::cout<<"Presionaste el numero uno";
        goto regresar;
        break;
    case 2:
        std::cout<<"Presionaste el numero dos";
        goto regresar;
        break;
    case 3:
        std::cout<<"Presionaste el numero tres";
        goto regresar;
        break;
    case 4:
        std::cout<<"Presionaste el numero cuatro";
        goto regresar;
        break;
    case 5:
        std::cout<<"Presionaste el numero cinco";
        goto regresar;
        break;
    case 6:
        std::cout<<"Nos vemoj, hablamoj";
        system("pause");
        return 0;
        break;
    default:
        std::cout<<"Tonto, te dije que entre 1 y 5, 0 6 para terminar";
        goto regresar;
        break;
    }

    system("pause");
    return 0;
}