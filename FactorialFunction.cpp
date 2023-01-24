#include <iostream>

int factorial (int numero);

int main(){
    int n;
    std::cout<<"Please enter a number to compute its factorial: "; std::cin>>n;
    std::cout<<"The factorial of "<<n<<" is: "<<factorial(n)<<"\n";
    system("pause");
    return 0;
}

int factorial (int numero){
    if(numero==0){
        numero=1;
    }else{
        numero=numero*factorial(numero-1);
    }
    return numero;
}