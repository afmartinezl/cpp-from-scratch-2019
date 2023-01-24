#include <iostream>
#include <string.h>

int main(){
    char text[40], revText[40];
    std::cout<<"Please write a palindrome: ";
    std::cin>>text;
    strcpy(revText,text);
    strrev(revText);
    if (strcmp(text,revText)!=0)
    {
        std::cout<<"\nFAIL! You did not write a palindrome\n\n"<<text<<"  "<<revText<<"\n";
    }   
    if (strcmp(text,revText)==0)
    {
        std::cout<<"Congratulations! Great Palindrome\n";
    }
    system("pause");
    return 0;
}