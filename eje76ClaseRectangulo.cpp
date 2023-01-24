#include <iostream>
class Rectangulo{
    private:
        int ancho;
        int alto;
    public: 
        Rectangulo(int _alto, int _ancho);
        void perimetro();
        void area();
};
Rectangulo::Rectangulo(int _alto, int _ancho){
    alto=_alto;
    ancho=_ancho;
}
void Rectangulo::perimetro(){
    int _perimetro;
    _perimetro=(alto*2)+(ancho*2);
    std::cout<<"El perimetro del rectangulo es "<<_perimetro<<" \n";

}
void Rectangulo::area(){
    int _area;
    _area=alto*ancho;
    std::cout<<"El area del rectangulo es "<<_area<<" \n";
}
int main(){
    Rectangulo r1=Rectangulo(5,5);//Forma larga de instanciar
    Rectangulo r2(6,7);//Forma corta
    r1.area();
    r2.area();
    r1.perimetro();
    r2.perimetro();
    system("pause");
    return 0;
}