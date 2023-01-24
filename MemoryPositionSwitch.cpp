#include <iostream>

float *n1, *n2, num1, num2, aux;
void exchange();

int main(){
    std::cout<<"Please enter two numbers:\nNumber 1: ";std::cin>>num1;
    std::cout<<"Number 2: "; std::cin>>num2;
    std::cout<<"\nThe original numbers are:\nNumber 1: "<<num1<<", position: "<<&num1<<"\n";
    std::cout<<"Number 2: "<<num2<<", position: "<<&num2<<"\n";
    exchange();
    std::cout<<"The switched numbers are:\nNumber 1: "<<num1<<", position: "<<&num1<<"\n";
    std::cout<<"Number 2: "<<num2<<", position: "<<&num2<<"\n";
    system("pause");
    return 0;
}

void exchange(){
    n1=&num1;
    n2=&num2;
    aux=*n1;
    *n1=*n2;
    *n2=aux;
}