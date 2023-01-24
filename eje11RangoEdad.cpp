#include <iostream>

using namespace std;

int main(){
    int edad;
    personal:
    cout<<"Por favor ingrese su edad:"; cin>>edad;
    if (edad>=18 && edad<=40){
        cout<<"Go big\n";
    }else{
        cout<<"Go home\n";
    }
    goto personal;
    system("pause");
    return 0;
}