#include <iostream>
#include <math.h>

int main(){
    int n,x=0,y=1,z=0;
    do
    {
        std::cout<<"digita un numero mayor a 1: ";
        std::cin>>n;
    } while (n<1);
    std::cout<<"1 ";
    for (int i = 1; i <= n; i++)
    {
        z=x+y;
        std::cout<<z<<" ";
        x=y;
        y=z;
    }
    std::cout<<"\n";
    system("pause");
    return 0;
}