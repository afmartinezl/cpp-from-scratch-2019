#include <iostream>
#include <stdlib.h>

int size,*dir;

void askGrades();
void showGrades();

int main(){
    askGrades();
    showGrades();
    std::cout<<"\n\n___________\n\n";
    delete[] dir;
    askGrades();
    showGrades();
    /*std::cout<<"Here your grades:\n";
    for (int i = 0; i < size; i++)
    {
        std::cout<<"Grade "<<i+1<<": "<<num[i]<<"Memory position: "<<dir++<<"\n";
    }*/
    system("pause");
    return 0;
}
void askGrades (){
    sizeagain:
    std::cout<<"Please enter the size of your array to register the grades: "; std::cin>>size;
    if (size<=1){
        std::cout<<"The size of the array must be greather than 1!\n"; 
        goto sizeagain;}
    dir=new int[size];
    std::cout<<"Please type the elements of the grade's array in the desired order:\n";
    for (int i = 0; i < size; i++)
    {
        std::cout<<"Grade "<<i+1<<": "; std::cin>>dir[i];
    }
}
void showGrades (){
    std::cout<<"Here your grades:\n";
    for (int i = 0; i < size; i++)
    {
        std::cout<<"Grade "<<i+1<<": "<<dir[i]<<", Memory position: "<<&dir[i]<<"\n";
    }
}