#include <iostream>
#include <math.h>

void asknumbers();
float multiplicate(float a,float b);
void multiplicacion(float a,float b);
float a,b;

int main(){
    asknumbers();
    multiplicate(a,b);
    multiplicacion(a,b);
    system("pause");
    return 0;
}

void asknumbers(){
    std::cout<<"Please enter a positive integer number: "; std::cin>>a;
    std::cout<<"Please enter another positive integer number: "; std::cin>>b;
    if (a>=0 && b>=0){
        std::cout<<"Thanks, both numbers are positive integers.\n";
    }else{
        std::cout<<"Wrong! Both numbers must be positive integers. Try again.\n";
        asknumbers();
    }
}

float multiplicate(float a,float b){
    /*float res;
    res=pow(a,b);
    return res;*/
    return pow(a,b);
}

void multiplicacion(float a,float b){
    float res;
    res=pow(a,b);
    std::cout<<"\n"<<res<<"\n";
}