#include <iostream>

struct Employees
{
    char name[30];
    int age;
}employee, *pointerEmployee=&employee;

void askData();
void showData();

int main(){
    askData();
    showData();
    system("pause");
    return 0;
}

void askData(){
    std::cout<<"Please enter the following employee data\n";
    std::cout<<"Name: "; std::cin>>pointerEmployee->name;
    std::cout<<"Age: "; std::cin>>pointerEmployee->age;
}

void showData(){
    std::cout<<"\nEMPLOYE DATA\n";
    std::cout<<"Name: "<<pointerEmployee->name<<"\n";
    std::cout<<"Age: "<<pointerEmployee->age<<"\n";
}