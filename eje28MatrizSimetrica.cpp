#include <iostream>
using namespace std;
int main(){
    int rowsA,colA,rowsB,colB;
    inicio:
    cout<<"Please insert the number of rows of the matrix A: ";
    cin>>rowsA;
    cout<<"Please insert the number of columns of the matrix A: ";
    cin>>colA;
    cout<<"Please insert the number of rows of the matrix B: ";
    cin>>rowsB;
    cout<<"Please insert the number of columns of the matrix B: ";
    cin>>colB;
    if(rowsA==colA && rowsB==colB && rowsA==colB){
    int matrixA[rowsA][colA],matrixB[rowsB][colB];
    rellenar:
    for (int i = 0; i < rowsA; i++)
    {
        for (int j = 0; j < colA; j++)
        {
            cout<<"Please insert the value in the position "<<i+1<<", "<<j+1<<" for the matrix A: ";
            cin>>matrixA[i][j];
        }
    cout<<"\n";    
    }
    for (int i = 0; i < rowsB; i++)
    {
        for (int j = 0; j < colB; j++)
        {
            cout<<"Please insert the value in the position "<<i+1<<", "<<j+1<<" for the matrix B: ";
            cin>>matrixB[i][j];
        }
    cout<<"\n";    
    }
    for (int i = 0; i < rowsB; i++)
    {
        for (int j = 0; j < colB; j++)
        {
            if (matrixA[i][j]!=matrixB[j][i])
            {
            cout<<"The matrix A and Matrix B are not symmetrical ";
            goto rellenar;
            }
            

        }
    cout<<"\n";    
    }
    }else
    {
        cout<<"Error! You did not insert square matrix values";
        goto inicio;
    } 
    cout<<"Congratulations!";
    system("pause");
    return 0;
}   

