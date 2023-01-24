#include <iostream>

int main(){
    int list[17]={1,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59},value,count,inf,sup,half,tam;
    bool found=false;
    tam=sizeof(list)/sizeof(*list);
    again:
    count=0;
    inf=0;
    sup=tam;

    std::cout<<"Please enter a value to be found within the following list: ";
    for (int i = 0; i < 17; i++)
    {
        std::cout<<list[i]<<" ";
    }
    std::cout<<"Please enter the value: ";
    std::cin>>value;
    
    while (inf<=sup && count<tam)
    {
        half=(inf+sup)/2;
        if(list[half]==value){
            found=true;
            break;
        }
        if (list[half]>value){
            sup=half;
            half=(inf+sup)/2;
        }
        if (list[half]<value){
            inf=half;
            half=(inf+sup)/2;
        }
        count++;
    }
    if (found==false)
    {
        std::cout<<"\nTry again!\n";
        goto again;
    }
    if (found==true)
    {
        std::cout<<"Good boy! The value was found in the position "<<half+1<<"\n";
    }
    
    
    
    system("pause");
    return 0;
}