#include <iostream>

struct Address
{
    char country[30];
    char city[30];
    char street[30];
    char InternalNumber[10];
};

struct Customer
{
    char name[30];
    char phone[15];
    Address AdrCustomer;
};

struct Employee
{
    char name[30];
    char phone[15];
    Address AdrEmployee;
};

int main(){
    char choice;
    int cust, emp;
    std::cout<<"Welcome to the record system of employees and customers\n\n";
    std::cout<<"Please enter the number of employees to register: ";std::cin>>emp;
    std::cout<<"\nPlease enter the number of customers to register: ";std::cin>>cust;
    Customer customers[cust];
    Employee employees[emp];
    fill:
    for (int i = 0; i < cust; i++)
    {
        std::cout<<"Enter the following customer data:\n";
        std::cout<<"Name: "; std::cin>>customers[i].name;
        std::cout<<"Phone number: "; std::cin>>customers[i].phone;
        std::cout<<"Country: "; std::cin>>customers[i].AdrCustomer.country;
        std::cout<<"City: "; std::cin>>customers[i].AdrCustomer.city;
        std::cout<<"Street: "; std::cin>>customers[i].AdrCustomer.street;
        std::cout<<"House Number: "; std::cin>>customers[i].AdrCustomer.InternalNumber;
    }
    for (int i = 0; i < emp; i++)
    {
        std::cout<<"Enter the following employee data:\n";
        std::cout<<"Name: "; std::cin>>employees[i].name;
        std::cout<<"Phone number: "; std::cin>>employees[i].phone;
        std::cout<<"Country: "; std::cin>>employees[i].AdrEmployee.country;
        std::cout<<"City: "; std::cin>>employees[i].AdrEmployee.city;
        std::cout<<"Street: "; std::cin>>employees[i].AdrEmployee.street;
        std::cout<<"House Number: "; std::cin>>employees[i].AdrEmployee.InternalNumber;
    }

    std::cout<<"\nThanks! Now, please verify if the data you entered is correct: ";
    std::cout<<"\nCUSTOMERS:\n";
    for (int i = 0; i < cust; i++)
    {
        std::cout<<"Name: "<<customers[i].name<<"\n";
        std::cout<<"Phone number: "<<customers[i].phone<<"\n";
        std::cout<<"Country: "<<customers[i].AdrCustomer.country<<"\n";
        std::cout<<"City: "<<customers[i].AdrCustomer.city<<"\n";
        std::cout<<"Street: "<<customers[i].AdrCustomer.street<<"\n";
        std::cout<<"House Number: "<<customers[i].AdrCustomer.InternalNumber<<"\n";
    }
    std::cout<<"\nEMPLOYEES:\n";
    for (int i = 0; i < emp; i++)
    {
        std::cout<<"Name: "<<employees[i].name<<"\n";
        std::cout<<"Phone number: "<<employees[i].phone<<"\n";
        std::cout<<"Country: "<<employees[i].AdrEmployee.country<<"\n";
        std::cout<<"City: "<<employees[i].AdrEmployee.city<<"\n";
        std::cout<<"Street: "<<employees[i].AdrEmployee.street<<"\n";
        std::cout<<"House Number: "<<employees[i].AdrEmployee.InternalNumber<<"\n";
    }
    
    choose:
    std::cout<<"\nIs it correct? (Press y/Y for YES and n/N for NO) "; std::cin>>choice; 

    switch (choice)
    {
    case 'y': std::cout<<"Good bye, good boy\n";
        break;
    case 'Y': std::cout<<"Good bye, good boy\n";
        break;
    case 'n': std::cout<<"Please enter the information again\n";
        goto fill;
    case 'N': std::cout<<"Please enter the information again\n";
        goto fill;
    
    default: std::cout<<"\nYou did not enter a valid choice";
    goto choose;
        break;
    }
    
    system("pause");
    return 0;
}
