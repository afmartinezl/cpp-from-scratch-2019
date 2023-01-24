#include <iostream>

struct Materias
{
    char nombre[50];
    float calificacion;

}materia[6]={{"Fisica",0},{"Quimica",0},{"Sociales",0},{"Geografia",0},{"Mate",0},{"Programacion",0}};

int main(){
    float suma=0, promedio;
    std::cout<<"Please enter the grade for each subject:\n";
    for (int i = 0; i < 6; i++)
    {
        std::cout<<"Grade of "<<materia[i].nombre<<": ";std::cin>>materia[i].calificacion;
    }
    for (int i = 0; i < 6; i++)
    {
        suma+=materia[i].calificacion;
    }
    promedio=suma/6;
    std::cout<<"Your GPA is"<<promedio<<"\n";
    if (promedio<=5.9)
    {
        std::cout<<"You failed!\n";
    }
    if (promedio>=6 && promedio<=6.9)
    {
        std::cout<<"You just passed me by!\n";
    }
    if (promedio>=7 && promedio<=8.9)
    {
        std::cout<<"Well done!\n";
    }
    if (promedio>=9 && promedio<=10)
    {
        std::cout<<"You are almost a god!\n";
    }
    if (promedio>10)
    {
        std::cout<<"You are a god, almost a programmer!\n";
    }
    
    system("pause");
    return 0;
}
