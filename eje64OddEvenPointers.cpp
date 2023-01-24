#include <iostream>

int main(){
    int n, *p;
    again:
    std::cout<<"Please enter an EVEN number: "; std::cin>>n;
    p=&n;
    if (*p%2!=0)
    {
        std::cout<<"This is not an EVEN number. Please try again!\n";
        goto again;
    }
    std::cout<<"Congratulations! "<<n<<" is in fact an EVEN number\n";
    std::cout<<"The memory position of the number is: "<<p<<"\n";
    std::cout<<"GOOD BYE! Stay Healthy\n";

    system("pause");
    return 0;
}