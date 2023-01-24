#include <iostream>

int main(){
struct product {
    int weight; //member of type int
    double price; //member of type double
} ;
product apple;
product banana, melon;

apple.price=500;
apple.weight=2;

std::cout<<"The apple price is "<<apple.price<<" and its weight is "<<apple.weight<<" \n";
/*struct product {
  int weight;
  double price;
} apple, banana, melon;*/ //is also valid!

    system("pause");
    return 0;
}