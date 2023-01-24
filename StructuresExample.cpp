#include <iostream>

struct Empleados
{
    char name[60];
    char address[60];
    char phone[15];
}
e1={"Juan","langstrasse 85","8702920"},
e2={"Maria","nietzschestrasse 10","8660060"},
e3={"Adafio","calle 65","87641282920"};

struct Clientes
{   
    char name[60];
    char address[60];
}c1,c2;


int main(){
std::cout<<"EMPLOYEES:\n";
std::cout<<"Name e1: "<<e1.name<<", address: "<<e1.address<<", phone number: "<<e1.phone<<"\n";
std::cout<<"Name e2: "<<e2.name<<", address: "<<e2.address<<", phone number: "<<e2.phone<<"\n";
std::cout<<"Name e1: "<<e3.name<<", address: "<<e3.address<<", phone number: "<<e3.phone<<"\n";
std::cout<<"CUSTOMERS:\n";
std::cout<<"Name c1: ";std::cin>>c1.name;
std::cout<<"Address c1: ";std::cin>>c1.address;
std::cout<<"Name c2: ";std::cin>>c2.name;
std::cout<<"Address c2: ";std::cin>>c2.address;
std::cout<<"Name e1: "<<c1.name<<", address: "<<c1.address<<"\n";
std::cout<<"Name e2: "<<c2.name<<", address: "<<c2.address<<"\n";
system("pause");
return 0;
}