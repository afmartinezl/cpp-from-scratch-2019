#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int matrixA[3][3],matrixB[3][3];
    //Ciclo de llenado de la matriz A
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<"Please insert the value in the position "<<i+1<<", "<<j+1<<": ";
            cin>>matrixA[i][j];
        }
    cout<<"\n";    
    }
    //Ciclo de copiado de matrices
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            matrixB[i][j]=matrixA[j][i];
        }
        cout<<"\n";
    }
    //Ciclo de display de la matriz A
    cout<<"Matriz A: \n" ;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<"        "<<matrixA[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<<"Matriz Transpuesta de A: \n";
    //Ciclo de display de la matriz B
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<"        "<<matrixB[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<<"\n";
    system("pause");
    return 0;
}