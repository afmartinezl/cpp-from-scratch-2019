#include <iostream>

int main(){
    char text[30]={};
    int la=0,le=0,li=0,lo=0,lu=0;
    std::cout<<"Please enter a sentence with vocals: ";
    std::cin.getline(text,30,'\n');
    for (int i = 0; i < 30; i++){
        switch (text[i])
        {
        case 'a': la++; break;
        case 'e': le++; break;
        case 'i': li++; break;
        case 'o': lo++; break;
        case 'u': lu++; break;
        case 'A': la++; break;
        case 'E': le++; break;
        case 'I': li++; break;
        case 'O': lo++; break;
        case 'U': lu++; break;
        }
    }
    std::cout<<"Letra a: "<<la<<"\n";
    std::cout<<"Letra e: "<<le<<"\n";
    std::cout<<"Letra i: "<<li<<"\n";
    std::cout<<"Letra o: "<<lo<<"\n";
    std::cout<<"Letra u: "<<lu<<"\n";
    system("pause");
    return 0;
}