#include <iostream>

int main(){
    int numbers[5],aux,ciclos=0;
    bool ordenado=false;    
    std::cout<<"Please enter five (5) numbers: \n";
    for (int i = 0; i < 5; i++)
    {
        std::cout<<"Enter the number "<<i+1<<": ";
        std::cin>>numbers[i];
    }
    for (int i = 0; i < 5 && ordenado==false; i++)
    {
        ordenado=true;
        for (int j = 0; j < 4; j++)
        {
            if (numbers[j]>numbers[j+1])
            {
                ordenado=false;
                aux=numbers[j];
                numbers[j]=numbers[j+1];
                numbers[j+1]=aux;
            }
            ciclos++;
        }
        
    }
    std::cout<<"Ascending order in "<<ciclos<<" cycles:\n";
    for (int i = 0; i < 5; i++)
    {
        std::cout<<numbers[i]<<"\n";
    }
    std::cout<<"Descending order in "<<ciclos<<" cycles:\n";
    for (int i = 4; i >= 0; i--)
    {
        std::cout<<numbers[i]<<"\n";
    }
    system("pause");
    return 0;
}