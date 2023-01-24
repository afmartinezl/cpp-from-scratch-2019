#include <iostream>

void cuadradoMatriz (int mat[2][3]);
void matrizMuestra (int mat[2][3]);

const int row=2, col=3;

int main(){
    int mat[row][col]={{4,5,6},{7,8,9}};
    matrizMuestra(mat);
    cuadradoMatriz(mat);
    matrizMuestra(mat);
    system("pause");
    return 0;
}

void cuadradoMatriz (int mat[2][3]){
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            mat[i][j]*=mat[i][j];
        }
        
    }

}
void matrizMuestra (int mat[2][3]){
    std::cout<<"\n";
    for (int i = 0; i < row; i++)
    {
        std::cout<<"\n";
        for (int j = 0; j < col; j++)
        {
            std::cout<<mat[i][j]<<" ";
        }
        
    }
    std::cout<<"\n";
}