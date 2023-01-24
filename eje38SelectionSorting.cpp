#include <iostream>

int main(){
    int numeros[5],min,aux;
    std::cout<<"Please enter five (5) integers: \n";
    for (int i = 0; i < 5; i++)
    {
        std::cout<<i+1<<".- ";
        std::cin>>numeros[i];
    }
    for (int i = 0; i < 5; i++)
    {
        min=i;
        for (int j = i+1; j < 5; j++)
        {
            if (numeros[min]>numeros[j])
            {
                min=j;
            }
            
        }
        aux=numeros[i];
        numeros[i]=numeros[min];
        numeros[min]=aux;
    }
    std::cout<<"The ascending sorting by selection is: \n";
    for (int i = 0; i < 5; i++)
    {
        std::cout<<numeros[i]<<"\n";
    }
    std::cout<<"The descending sorting by selection is: \n";
    for (int i = 4; i >= 0; i--)
    {
        std::cout<<numeros[i]<<"\n";
    }
    system("pause");
    return 0;
}