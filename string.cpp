#include <iostream>
using namespace std;

int main(){
    char programador[]="programador";
    //char novato[]={'n','o','v','a','t','o'};
    char nombre[20];
    cout<<"Hallo "<<programador<<"\n"<<sizeof(programador)<<"\n";
    //cout<<"Hola "<<novato<<"\n"<<sizeof(novato)<<"\n";
    cout<<"Please insert your name: ";
    //gets(nombre);
    cin.getline(nombre,sizeof(nombre));
    cout<<"Hallo "<<nombre<<"\n";
    system("pause");
    return 0;
}