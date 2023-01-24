#include <iostream>

void asknumbers();
float multiplicate(int a,int b);
void multiplicacion(float a,float b);


int main(){
    asknumbers();
    multiplicate(5,4);
    multiplicacion(5,4);
    system("pause");
    return 0;
}

void asknumbers(){
    int a,b;
    std::cout<<"Please enter a positive integer number: "; std::cin>>a;
    std::cout<<"Please enter another positive integer number: "; std::cin>>b;

}

float multiplicate(float a,float b){
    /*float res;
    res=a*b;
    return res;*/
    return a*b;
}

void multiplicacion(float a,float b){
    float res;
    res=a*b;
    std::cout<<res;
}

