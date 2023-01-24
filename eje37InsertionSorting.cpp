#include <iostream>

int main(){
    int numeros[5],aux,pos=0;
    std::cout<<"Please enter the following data: \n";
    for (int i = 0; i < 5; i++)
    {
        std::cout<<i+1<<".-"; std::cin>>numeros[i];
    }
    for (int i = 0; i < 5; i++)
    {
        pos=i;
        aux=numeros[i];
        while ((pos>0 && numeros[pos-1]>aux))
        {
            numeros[pos]=numeros[pos-1];
            pos--;
        }
        numeros[pos]=aux;
    }
    std::cout<<"The ascending sorting by insertion is: \n";
    for (int i = 0; i < 5; i++)
    {
        std::cout<<numeros[i]<<"\n";
    }
    std::cout<<"The descending sorting by insertion is: \n";
    for (int i = 4; i >= 0; i--)
    {
        std::cout<<numeros[i]<<"\n";
    }
    
    system("pause");
    return 0;
}