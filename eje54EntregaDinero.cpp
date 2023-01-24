#include <iostream>

void entregaDinero(int,int& hundred, int& fifty, int& twenty, int& ten, int& five, int& one);

int main(){
    int money, hundred=0, fifty=0, twenty=0, ten=0, five=0, one=0;
    std::cout<<"How much money will you withdraw: "; std::cin>>money;
    entregaDinero(money, hundred, fifty, twenty, ten, five, one);
    std::cout<<"Here's your money in bills of:\n";
    std::cout<<"One hundred: "<<hundred<<"\n";
    std::cout<<"Fifty: "<<fifty<<"\n";
    std::cout<<"Twenty: "<<twenty<<"\n";
    std::cout<<"Ten: "<<ten<<"\n";
    std::cout<<"Five: "<<five<<"\n";
    std::cout<<"One: "<<one<<"\n";
    system("pause");
    return 0;
}

void entregaDinero(int money,int& hundred, int& fifty, int& twenty, int& ten, int& five, int& one){
    hundred=money/100;
    money=money%100;
    fifty=money/50;
    money=money%50;
    twenty=money/20;
    money=money%20;
    ten=money/10;
    money=money%10;
    five=money/5;
    money=money%5;

    one=money;

}