# include <iostream>

const int R=3, C=3;

void llenaMatriz(int m[][C]);
bool compruebaSimetriaMatriz(int m[][C]);

int main(){
    int m[R][C];
    regresa:
    llenaMatriz(m);
    bool simetrica=compruebaSimetriaMatriz(m);
    if(simetrica==true){
        std::cout<<"\nCongratulations! You entered a symmetrical matrix\n";
    }
    else
    {
        std::cout<<"\nYou are so full of shit! The matrix is not symmetrical\n";
        goto regresa;
    }
    
    system("pause");
    return 0;
}

void llenaMatriz (int m[][C]){
std::cout<<"Please enter the values or elements of the symmetrical matrix: \n";
for (int i = 0; i < R; i++)
{
    for (int j = 0; j < C; j++)
    {
        std::cout<<"Value["<<i+1<<"]["<<j+1<<"]: "; std::cin>>m[i][j];
    }
    
}

}

bool compruebaSimetriaMatriz(int m[][C]){
    bool simetrica=true;
    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            if (m[i][j]!=m[j][i])
            {
                simetrica=false;
                break;
                break;
            }
            
        }
        
    }
    return simetrica;
}
