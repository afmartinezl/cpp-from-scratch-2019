#include <iostream>
#include <string.h>

int main(){
    char text1[]="ayer";
    char text2[]="ayer";
    int compare;
    compare=strcmp(text1,text2);
    if (compare==0)
    {
        std::cout<<"The two strings are equal\n";
    }
    if (compare!=0)
    {
        std::cout<<"The two strings are different\n";
        if (compare>0)
        {
            std::cout<<"The text 1 is longer than the text 2\n";
        }
        if (compare<0)
        {
            std::cout<<"The text 1 is shorter than the text 2\n"; 
        }
        
        
    }
    system("pause");
    return 0;
}