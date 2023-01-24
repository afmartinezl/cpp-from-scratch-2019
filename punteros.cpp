#include <iostream>

int main(){
    int dos=2, cuatro=4, treintaydos=32,e,f,g;
    int *d, *c, *t;
    d=&dos;
    c=&cuatro;
    t=&treintaydos;
    e=*d;
    f=*c;
    g=*t;
    std::cout<<d<<"\n";
    std::cout<<c<<"\n";
    std::cout<<t<<"\n";
    std::cout<<e<<"\n";
    std::cout<<f<<"\n";
    std::cout<<g<<"\n";
    system("pause");
    return 0;
}