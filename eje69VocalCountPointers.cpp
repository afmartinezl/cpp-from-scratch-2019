#include <iostream>
#include <stdlib.h>
#include <string.h>

void askName(char *name);
int vocalCount(char *name);

int main(){
    char name[30];
    askName(name);
    int vocals=vocalCount(name);
    std::cout<<"Your name has "<<vocals<<" vocals!\n";
    system("pause");
    return 0;
}

void askName(char *name){
    std::cout<<"Welcome! Please enter your name: "; std::cin>>name;
}

int vocalCount(char *name){
    strupr(name);
    int count=0;
    while (*name)
    {//*name!=null
        switch (*name)
        {
        case 'A': count++; break;
        case 'E': count++; break;
        case 'I': count++; break;
        case 'O': count++; break;
        case 'U': count++; break;
        }name++;
    }return count;
}