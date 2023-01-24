#include <iostream>
#include <string.h>

int main(){
    char text1[]="programador novato";
    char text2[10];
    strcpy(text2,text1);
    std::cout<<text2<<" "<<strlen(text2)<<"\n";
    system("pause");
    return 0;
}