#include <iostream>

struct Clientes
{
    char nombre[65];
    int tiempoAire=0;
}cliente[3]={{"Pepe"},{"Maria"},{"Juana"}};

int main(){
    int tiempoAire=0,id;
    char opcion;
    std::cout<<"CUSTOMER LIST\n";
    for (int i = 0; i < 3; i++)
    {
        std::cout<<"Id: "<<i<<"| Name: "<<cliente[i].nombre<<"\n";
    }
    regresa:
    std::cout<<"Enter the id of the customer to be recharged: "; std::cin>>id;
    if (cliente[id].nombre[0]=='\0'){
        std::cout<<"The customer does not exist, please try again\n";
        goto regresa;
    }else{
        std::cout<<"Please enter the value to charge for the customer "<<cliente[id].nombre<<": ";
        std::cin>>tiempoAire;
        cliente[id].tiempoAire+=tiempoAire;
        std::cout<<"Do you want to charge more to other customers? (press c)\n or do you want to exit (press f)\n";
        std::cin>>opcion;
        if (opcion=='c'){
                goto regresa;
        }
    }
    std::cout<<"\nCUSTOMERS CURRENT BALANCE\n";
    for (size_t i = 0; i < 3; i++)
    {
        std::cout<<"Id: "<<i<<"| Name: "<<cliente[i].nombre<<"| Balance: "<<cliente[i].tiempoAire<<"\n";
    }
    
    
    system("pause");
    return 0;
}
