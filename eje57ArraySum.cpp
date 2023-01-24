#include <iostream>

void llenarDatos (int vector[]);
int sumaDatos (int vector[]);

const int TAM=5;

int main(){
    int vec[TAM],sum;
    llenarDatos(vec);
    sum=sumaDatos(vec);
    system("pause");
    return 0;
}

void llenarDatos (int vec[]){
    std::cout<<"Please enter the "<<TAM<<" values of the array:\n";
    for (int i = 0; i < TAM; i++)
    {
        std::cout<<"Number "<<i+1<<": "; std::cin>>vec[i];
    }
    
}
int sumaDatos (int vec[]){
    int sum=0;
    for (int i = 0; i < TAM; i++)
    {
        sum=sum+vec[i];
    }
    std::cout<<"The sum of all the elements of the array is: "<<sum<<"\n";
    return sum;
}