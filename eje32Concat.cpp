#include <string.h>
#include <iostream>

int main(){
    char name[20], lastname[20], fullname[40]={};
    std::cout<<"Please enter your name: ";std::cin>>name;
    std::cout<<"\nPlease enter your last name: ";std::cin>>lastname;
    strcat(fullname,name);//strcpy(fullname,name) es otra opción sin inicializar
    strcat(fullname," ");
    strcat(fullname,lastname);
    std::cout<<"\nWelcome Mr/Mrs. "<<fullname<<"\n";
    system("pause");
    return 0;
}