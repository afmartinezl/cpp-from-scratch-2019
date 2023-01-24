#include <iostream>
#include <stdlib.h>

int *numbers,size,search;
void askData();
void askNumber();
void searchNumber();

int main(){
    askData();
    askNumber();
    searchNumber();
    delete[] numbers;
    system("pause");
    return 0;
}

void askData(){
    sizeagain:
    std::cout<<"Please enter the size of your array: \n"; std::cin>>size;
    if (size<1)
    {
        std::cout<<size<<" is not a valid size for the array. Please enter a positive integer greather than 1.\n";
        goto sizeagain;
    }
    numbers=new int[size];
    std::cout<<"Please enter the numbers for the array: \n";
    for (int i = 0; i < size; i++)
    {
        std::cout<<"Enter the number "<<i+1<<": "; std::cin>>*(numbers+i);
    }
}

void askNumber(){
    std::cout<<"Please enter the number to be found: "; std::cin>>search;
}

//Se hace con while para interrumpir el ciclo con mayor facilidad
void searchNumber(){
    bool found=false;
    int i=0;
    while (i<size && found==false)
    {
        if (*(numbers+i)==search)
        {
            found=true;
        }
        i++;
    }
    if (found==true)
    {
        std::cout<<"Congrats!The number "<<search<<" is indeed within the list.\n";
    }else
    {
        std::cout<<"Wrong!The number "<<search<<" is not in the list.\n";
    }
    
    
}
