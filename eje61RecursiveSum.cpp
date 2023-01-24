#include <iostream>

int sumaRecursiva(int n);

int main(){
    int n;
    std::cout<<"Please enter a positive integer to compute the sum of their minor numbers till zero: "; 
    std::cin>>n;
    std::cout<<"\nThe sum of the numbers is: "<<sumaRecursiva(n)<<"\n";
    system("pause");
    return 0;
}

int sumaRecursiva(int n){
    int suma=0;
    if (n==1){
        suma=1;
    }else{
        suma=n+sumaRecursiva(n-1);    
    }
    return suma;
}