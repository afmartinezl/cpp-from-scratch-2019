#include <iostream>
#include <math.h>

int elevate(int base, int exp);

int main(){
    int base,exp,res;
    again:
    std::cout<<"WELCOME! THIS PROGRAM RAISE A BASE TO THE EXPONENT\n\n";
    std::cout<<"The two numbers must be positive integers. Please enter the BASE: "; std::cin>>base;
    std::cout<<"Good Job! Enter now the EXPONENT: "; std::cin>>exp;
    if (base<1 || exp<1)
    {
        std::cout<<"One or both numbers are not positive integers, please type them again\n";
        goto again;
    }
    res=elevate(base,exp);
    std::cout<<"The result of the operation is the following:\n";
    std::cout<<base<<"^"<<exp<<"="<<res<<"\n";
    system("pause");
    return 0;
}

int elevate(int base, int exp){
    int res=0;
    if (exp==1)
    {
        res=base;
    }else{
        res=base*elevate(base,exp-1);
    }
    return res;
}