#include <iostream>

int main(){
    int size;
    sizeagain:
    std::cout<<"Please enter the size of your array to register the grades: "; std::cin>>size;
    if (size<=1)
    {
        std::cout<<"The size of the array must be greather than 1!\n"; 
        goto sizeagain;
    }

    int num[size], *dir, smallest=999999;
    std::cout<<"Please type the elements of the grade's array in the desired order:\n";
    for (int i = 0; i < size; i++)
    {
        std::cout<<"Grade "<<i+1<<": "; std::cin>>num[i];
    }
    dir=num;

    std::cout<<"\nThe smallest number of your array is: "<<smallest<<"\n";
    system("pause");
    return 0;
}