#include <stdlib.h>
#include <iostream>

void askData();
void showData();

int **matrix,rows,columns;

int main(){
    askData();
    showData();
    for (int i = 0; i < rows; i++)
    {
        delete[] matrix[i];
    }
    
    delete[] matrix;
    system("pause");
    return 0;
}

void askData(){
    std::cout<<"How many rows will the matrix have: "; std::cin>>rows;
    std::cout<<"How many columns will the matrix have: "; std::cin>>columns;
    matrix=new int*[rows];
    for (int i = 0; i < rows; i++)
    {
        matrix[i]=new int[columns];
    }
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            std::cout<<"Position["<<i+1<<"]["<<j+1<<"]: "; 
            std::cin>>*(*(matrix+i)+j); //matrix[i][j];
        }
    }  
}

void showData(){
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            std::cout<<*(*(matrix+i)+j)<<" ";
        }
        std::cout<<"\n";
    }
    
}