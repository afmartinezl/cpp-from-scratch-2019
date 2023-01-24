#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int rows,columns;
    cout<<"Please insert the number of rows of the matrix: ";
    cin>>rows;
    cout<<"Please insert the number of columns of the matrix: ";
    cin>>columns;
    int matrix[rows][columns],matrix2[rows][columns];
    //Ciclo de llenado de la matriz A
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cout<<"Please insert the value in the position "<<i+1<<", "<<j+1<<": ";
            cin>>matrix[i][j];
        }
    cout<<"\n";    
    }
    //Ciclo de copiado de matrices
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            matrix2[i][j]=matrix[i][j];
        }
        cout<<"\n";
    }
    //Ciclo de display de la matriz B
    cout<<"\n";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cout<<"        "<<matrix2[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<<"\n";
    system("pause");
    return 0;
}