#include <iostream>
#include <stdlib.h>

int main(){
    char text[4],text1[2],text2[2];
    int num1,num2,sum=0;
    std::cout<<"Please enter 4 digits: ";
    std::cin>>text;
    text1[0]=text[0];
    text1[1]=text[1];
    text1[2]='\0';
    num1=atoi(text1);

    text2[0]=text[2];
    text2[1]=text[3];
    text2[2]='\0';
    num2=atoi(text2);

    sum=num1+num2;

    std::cout<<"The sum is equal to "<<sum<<"\n";


    system("pause");
    return 0;
}