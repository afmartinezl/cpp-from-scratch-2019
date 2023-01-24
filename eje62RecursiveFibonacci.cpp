#include <iostream>
int fibonacci (int n);

int main(){
    int n,res;
    std::cout<<"Insert a positive integer to compute its fibonacci series: ";std::cin>>n;
    res=fibonacci(n);
    std::cout<<"The result is"<<res<<"\n";
    system("pause");
    return 0;
}

int fibonacci (int n){
    if (n<=1)
    {
        return n;
    }else
    {
        return fibonacci(n-1)+fibonacci(n-2);
    }
    
    
}