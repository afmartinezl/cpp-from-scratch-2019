/*Crear 2 templates para almacenar dos variables diferentes
Crear una función que reciba dos variables de tipo template
Si ambas variables son de tipo char, mostrar las variables concatenadas
Si son de tipo numérico sumarlos*/

#include <iostream>
#include <string.h>
#include <typeinfo>

template <class tipo1, class tipo2>
void concatenaOsuma(tipo1 dato1, tipo2 dato2);

int main(){
    int varInt=5;
    char varChar='v';
    float varFloat=5.55;
    concatenaOsuma(varChar,varChar);
    system("pause");
    return 0;
}

template <class tipo1, class tipo2>
void concatenaOsuma(tipo1 dato1, tipo2 dato2){
    if (std::string(typeid(dato1).name())=="c" || std::string(typeid(dato2).name())=="c"){
        std::cout<<"La concatenacion es: "<<dato1<<dato2<<"\n";

    }else{
        std::cout<<"La suma es: "<<(dato1+dato2)<<"\n";
    }
    
}
