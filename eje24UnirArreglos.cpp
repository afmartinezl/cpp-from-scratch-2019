#include <iostream>

int main(){
    int array1[5],array2[5],array3[10];

    for (int i = 0; i < 5; i++)
    {
        std::cout<<"Please enter the value "<<i+1<<" of the array1: ";
        std::cin>>array1[i];
    }
    std::cout<<"\n\n";
    for (int i = 0; i < 5; i++)
    {
        std::cout<<"Please enter the value "<<i+1<<" of the array2: ";
        std::cin>>array2[i];    
    }

    for (int i = 0; i < 10; i++)
    {
        if (i<5)
        {
            array3[i]=array1[i];
        }

        if (i>=5)
        {
            array3[i]=array2[i-5];
        }
    }
    
    for (int i = 0; i < 10; i++)
    {
        std::cout<<i+1<<". "<<array3[i]<<"\n";
    }
    system("pause");
    return 0;
}