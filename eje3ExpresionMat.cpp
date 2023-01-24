#include <iostream>

int main(){
    float a,b,res;
    std::cout<<"Humano, por favor ingresa lo siguiente:\n";
    std::cout<<"Valor a:"; std::cin>>a; 
    std::cout<<"\nValor b:"; std::cin>>b;
    
    res=a/b+1;
    std::cout.precision(3);
    std::cout<<"Humano, aqui esta tu pinche resultado:"<<res<<"\n   ";

    system("pause");
    return 0;
}