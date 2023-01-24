#include <iostream>

int mayor(int *numeros,int nElementos);
int mayorAlternativo(int *numeros,int nElementos);

int main(){
    int nElementos=5;
    int numeros[nElementos]={1,2,3,4,5};
    //int max=mayor(numeros, nElementos);
    int max=mayorAlternativo(numeros, nElementos);
    std::cout<<"El numero maximo es "<<max<<"\n";
    system("pause");
    return 0;
}

int mayor(int *numeros,int nElementos){
    int max=0;
    for (int i = 0; i < nElementos; i++)
    {
        if (*numeros>max)
        {
            max=*numeros;
        }
        numeros++;
    }
    
}
int mayorAlternativo(int *numeros,int nElementos){
    int max=0;
    for (int i = 0; i < nElementos; i++)
    {
        if (*(numeros+i)>max)
        {
            max=*(numeros+i);
        }
    }
    
}