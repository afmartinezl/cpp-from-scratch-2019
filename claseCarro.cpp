#include <iostream>
class Carro{
    private:
        int llave;
        int numeroSerie;
        bool acceso;
        int velocidad;
    public:
        Carro(int _llave, int _numeroSerie); //método constructor
        void encender(int _llave);
        void acelerar();
        void frenar();
        std::string marca;
        std::string modelo;
};
Carro::Carro(int _llave, int _numeroSerie){
    llave=_llave;
    numeroSerie=_numeroSerie;
    acceso=false;
    velocidad=0;
}
void Carro::encender(int _llave){
    if(_llave=llave){
        acceso=true;
        std::cout<<"\nCarro encendido\n";
    }else{
        acceso=false;
        std::cout<<"\nLadron detectado! ...Llamando a los tombos...\n";
    }
}
void Carro::acelerar(){
    if(acceso==true){
        velocidad=velocidad+10;
        std::cout<<"\nTu velocidad es"<<velocidad<<"\n";
    }else{
        std::cout<<"\nEl acceso ha sido denegado!\n";
    }
}
void Carro::frenar(){
    if(acceso==true){
        velocidad=velocidad-10;
        std::cout<<"\nTu velocidad es"<<velocidad<<"\n";
    }else{
        std::cout<<"\nEl acceso ha sido denegado!\n";
    }
}
int main(){
    Carro vocho1=Carro(123,55);
    Carro vocho2=Carro(456,66);
    Carro vocho3=Carro(789,77);
    vocho1.encender(126);
    vocho1.acelerar();
    vocho1.acelerar();
    vocho1.frenar();
    system("pause");
    return 0;
}