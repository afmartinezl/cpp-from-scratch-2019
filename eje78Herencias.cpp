#include <iostream>
//EMPIEZA PERSONA
class Persona{
    private:
        int edad;
        char *nombre;
    public:
        Persona(int _edad, char _nombre[]);
        void mostrarPersona();
};

Persona::Persona(int _edad, char _nombre[]){
    edad=_edad;
    nombre=_nombre;
}

void Persona::mostrarPersona(){
    std::cout<<"Edad: "<<edad<<"\n";
    std::cout<<"Nombre: "<<nombre<<"\n";
}
//TERMINA PERSONA
//EMPIEZA ALUMNO
class Alumno:public Persona{
    private:
        float calificacion;
    public:
        Alumno(int _edad, char _nombre[], float _calificacion);
        void mostrarAlumno();
};

Alumno::Alumno(int _edad, char _nombre[], float _calificacion):Persona(_edad,_nombre){
    calificacion=_calificacion;
}

void Alumno::mostrarAlumno(){
    std::cout<<"Calificacion: "<<calificacion<<"\n";
}
//TERMINA ALUMNO
//EMPIEZA EMPLEADO
class Empleado:public Persona{
    private:
        float sueldo;
    public:
        Empleado(int _edad, char _nombre[], float _sueldo);
        void mostrarEmpleado();
};

Empleado::Empleado(int _edad, char _nombre[], float _sueldo):Persona(_edad,_nombre){
    sueldo=_sueldo;
}

void Empleado::mostrarEmpleado(){
    std::cout<<"Sueldo: "<<sueldo<<"\n";
}
//TERMINA EMPLEADO
//EMPIEZA UNIVERSITARIO
class Universitario:public Alumno{
    private:
        char *carrera;
    public:
        Universitario(int _edad, char _nombre[], float calificacion, char _carrera[]);
        void mostrarUniversitario();
};

Universitario::Universitario(int _edad, char _nombre[], float _calificacion, char _carrera[]):Alumno(_edad,_nombre,_calificacion){
    carrera=_carrera;
}

void Universitario::mostrarUniversitario(){
    std::cout<<"Carrera: "<<carrera<<"\n";
}
//TERMINA UNIVERSITARIO

int main(){
    Persona p1(28,"Pipe");
    p1.mostrarPersona();
    std::cout<<"\n\n";
    Empleado e1(35,"Jorge",3000);
    e1.mostrarPersona();
    e1.mostrarEmpleado();
    std::cout<<"\n\n";
    Alumno a1(22,"Pogacar",3.8);
    a1.mostrarPersona();
    a1.mostrarAlumno();
    std::cout<<"\n\n";
    Universitario u1(26,"Susy",1.3,"Medicina");
    u1.mostrarPersona();
    u1.mostrarAlumno();
    u1.mostrarUniversitario();
    system("pause");
    return 0;
}