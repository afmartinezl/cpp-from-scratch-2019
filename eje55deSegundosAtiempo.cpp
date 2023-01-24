#include <iostream>

void DeSegundosAtiempo (int time, int& hour, int& minute, int& second);

int main(){
    int time, hour=0, minute=0, second=0;
    std::cout<<"Please enter the time (in seconds) to be converted: "; std::cin>>time;
    DeSegundosAtiempo(time, hour, minute, second);
    std::cout<<"The converted time is the following:\n";
    std::cout<<"Hours: "<<hour<<"\n";
    std::cout<<"Minutes: "<<minute<<"\n";
    std::cout<<"Seconds: "<<second<<"\n";
    system("pause");
    return 0;
}

void DeSegundosAtiempo (int time, int& hour, int& minute, int& second){
    hour=time/3600;
    time=time%3600;
    minute=time/60;
    time=time%60;
    second=time;
}