#include <iostream>

int main(){
    int numeros[]={1,2,3,4,5}, *dir;
    dir=numeros;
    for (int i = 0; i < 5; i++)
    {
        std::cout<<"Number: "<<numeros[i]<<", Position: "<<dir++<<"\n";
    }

    system("pause");
    return 0;
}