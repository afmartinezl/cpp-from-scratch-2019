#include <iostream>
#include <string.h>

int main(){
    char textLow[40],textUpp[40];
    std::cout<<"Enter a text: ";std::cin>>textLow;
    std::cout<<"Enter the same text (without considering lowercanse and UPPERCASE): ";std::cin>>textUpp;
    strupr(textLow);
    strupr(textUpp);
    if(strcmp(textLow,textUpp)!=0){
        std::cout<<"The words "<<textLow<<" and "<<textUpp<<" are not similar\n";
    }
    std::cout<<"Good boy!\n";
    system("pause");
    return 0;
}