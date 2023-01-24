#include <iostream>
#include <string.h>
int main(){
    char text[10];
    int large=0;
    entering:
    std::cout<<"Please enter a text with at least 10 characters: ";
    gets(text);
    large=strlen(text);
    if (large>=10)
    {
        std::cout<<"Congratulations, you did obey\n";
    }else
    {
        std::cout<<"Try again asshole, please enter a text with 10 or more characters\n";
        goto entering;
    }
    system("pause");
    return 0;
}