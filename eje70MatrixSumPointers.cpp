#include <iostream>
#include <stdlib.h>

void askData();
void sumData();
void showData();

int **matrix1,**matrix2,rows,columns;

int main(){
    askData();
    sumData();
    showData();
    for (int i = 0; i < rows; i++)
    {
        delete[] matrix1[i];
        delete[] matrix2[i];
    }
    delete[] matrix1;
    delete[] matrix2;
    system("pause");
    return 0;
}

void askData(){
    std::cout<<"How many rows will the matrix have: "; std::cin>>rows;
    std::cout<<"How many columns will the matrix have: "; std::cin>>columns;
    matrix1=new int*[rows];
    matrix2=new int*[rows];
    for (int i = 0; i < rows; i++)
    {
        matrix1[i]=new int[columns];
        matrix2[i]=new int[columns];
    }
    std::cout<<"Please fill the first matrix:\n";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            std::cout<<"Position["<<i+1<<"]["<<j+1<<"]: "; 
            std::cin>>*(*(matrix1+i)+j); //matrix[i][j];
        }
    }  
    std::cout<<"Please fill the second matrix:\n";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            std::cout<<"Position["<<i+1<<"]["<<j+1<<"]: "; 
            std::cin>>*(*(matrix2+i)+j); //matrix[i][j];
        }
    }  
}

void sumData(){
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            *(*(matrix1+i)+j)=*(*(matrix1+i)+j)+*(*(matrix2+i)+j);
        }
        
    }
    
}

void showData(){
    std::cout<<"The resulting addition matrix is: \n";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            std::cout<<*(*(matrix1+i)+j)<<" ";
        }
        std::cout<<"\n";
    }
    
}