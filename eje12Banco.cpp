#include <iostream>

int main(){
    int opcion;
    float total=1000,ingreso,egreso;
    std::cout<<"¡¡Bienvenido a LSAF ATM!!\n";
    regreso:
    std::cout<<"Por favor digita una opcion\n";
    std::cout<<"1. Ingreso de dinero\n";
    std::cout<<"2. Retirar dinero\n";
    std::cout<<"3. Salir\n";
    std::cin>>opcion;

    switch (opcion)
    {
    case 1:
        std::cout<<"Cuanto dinero vas a ingresar?: ";
        std::cin>>ingreso;
        total+=ingreso;
        std::cout<<"tienes en el banco un total de &"<<total<<"\n";
        goto regreso;
    case 2:
        std::cout<<"Cuanto dinero vas a retirar?: ";
        std::cin>>egreso;
        if(total<egreso){
            std::cout<<"Jah! Pinche humano cabron, no tienes tanto dinero :v \n Tienes"<<total<<"\n";
        }else{
            total-=egreso;
            std::cout<<"tienes en el banco un total de &"<<total<<"\n";
        }
        goto regreso;
    case 3:
        break;
    default:
        goto regreso;
    }
    system("pause");
    return 0;
}