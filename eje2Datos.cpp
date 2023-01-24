#include <iostream>

int main(){
    char sexo[10];
    int edad;
    float estatura;

    std::cout<<"Humano, escribe lo siguiente:";
    std::cout<<"\nSexo: "; std::cin>>sexo;
    std::cout<<"\nEdad: "; std::cin>>edad;
    std::cout<<"\nEstatura: "; std::cin>>estatura;

    std::cout<<"Humano, aqui estan tus pinches datos:\n";
    std::cout<<"Sexo:"<<sexo<<"\n";
    std::cout<<"Edad:"<<edad<<"\n";
    std::cout<<"Estatura:"<<estatura    <<"\n";

    system("pause");
    return 0;
}