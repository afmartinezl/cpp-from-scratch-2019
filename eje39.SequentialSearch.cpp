#include <iostream>
#include <stdlib.h>

int main(){
    int list[]={1,7,14,19,26,30,39,52,67,84},pos=0,value;
    bool found=false;
    again:
    std::cout<<"You will find a number within the following list:\n";
    for (int i = 0; i < 10; i++)
    {
        std::cout<<list[i]<<" ";
    }
    std::cout<<"\nPlease enter the number to be found: ";
    std::cin>>value;
    while (found==false && pos<10)
    {
        if (value==list[pos])
        {
            found=true;
            break;
        }
        pos++;
    }
    if (found==false)
    {
        std::cout<<"\nThe number is not on the list\n";
        pos=0;
        goto again;
    }else
    {
        std::cout<<"\nGood boy\n";
    }
    
    
    
    system("pause");
    return 0;
}