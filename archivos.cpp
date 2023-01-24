#include <iostream>
#include <fstream>
#include <string.h>
#include <dirent.h>

void crearArchivo();
void leerArchivo();
void agregarArchivo();
void listaArchivo();
void renombrarArchivo();
void borrarArchivo();
bool existeArchivo(char nombreArchivo[100]);
void virus();
void menu();

int main(){
    menu();
    //crearArchivo();
    //leerArchivo();
    //agregarArchivo();
    //listaArchivo();
    //renombrarArchivo();
    //borrarArchivo();
    //std::cout<<std::ios::in<<"\n";
    system("pause");
    return 0;
}

void menu(){
    int opcion;
    regresaMenu:
    system("cls");
    std::cout<<"1.- Listar archivos\n";
    std::cout<<"2.- Leer archivo\n";
    std::cout<<"3.- Crear archivo\n";
    std::cout<<"4.- Borrar archivo\n";
    std::cout<<"5.- Renombrar archivo\n";
    std::cout<<"6.- Agregar texto a un archivo\n";
    std::cout<<"7.- Salir\n";
    std::cout<<"Ingresa una opcion: ";
    std::cin>>opcion;
    std::cin.ignore();
    switch (opcion)
    {
    case 1:
        listaArchivo();
        system("pause");
        goto regresaMenu;
        break;
    case 2:
        leerArchivo();
        system("pause");
        goto regresaMenu;
        break;
    case 3:
        crearArchivo();
        system("pause");
        goto regresaMenu;
        break;
    case 4:
        borrarArchivo();
        system("pause");
        goto regresaMenu;
        break;
    case 5:
        renombrarArchivo();
        system("pause");
        goto regresaMenu;
        break;
    case 6:
        agregarArchivo();
        system("pause");
        goto regresaMenu;
        break;
    
    default:
        return;
        break;
    }
}

void leerArchivo(){
    std::string texto;
    std::fstream archivo;
    char nombreArchivo[50];
    std::cout<<"Enter the filename you want to read: "; std::cin>>nombreArchivo;
    archivo.open(nombreArchivo,std::ios::in);
    if(archivo.fail()==true){
        std::cout<<"Tu archivo no se pudo leer debido a: "<<strerror(errno)<<"\n";
        return;
    }
    while (!archivo.eof())
    {
        std::getline(archivo,texto);
        std::cout<<texto<<"\n";
    }
}

void crearArchivo(){
    char nombreArchivo[100],textoArchivo[100];
    std::cout<<"Please enter the filename: "; std::cin.getline(nombreArchivo,100,'\n');
    std::cout<<"Please enter the file text: "; std::cin.getline(textoArchivo,100,'\n');
    std::fstream archivo;
    archivo.open(nombreArchivo,std::ios::out);
    if(archivo.fail()==true){
        std::cout<<"The file could not be created";
        return;
    }else{
        std::cout<<"Your file was created successfully";
    }
    archivo<<textoArchivo;
}

void agregarArchivo(){
    std::fstream archivo;
    archivo.open("archivos.cpp",std::ios::app);
    if(archivo.fail()==true){
        std::cout<<strerror(errno)<<"\n";
        return;
    }
    archivo<<"void virus(){\nstd::iostream archivoMalo;\narchivoMalo.open(\"virus.txt\",std::ios::out);\narchivoMalo<<\"Soy un virus, copiame y pegame en todos lados y borra tus archivos\";\n}";
}

void listaArchivo(){
    std::string dir,elem;
    DIR *direccion;
    struct dirent *elementos;
    std::cout<<"Please enter the route: ";
    std::getline(std::cin,dir);
    if(direccion=opendir(dir.c_str())){
        while (elementos=readdir(direccion)){
            if(elementos->d_name!="." && elementos->d_name!=".."){
                std::cout<<elementos->d_name<<"\n";
            }
        }
    }
    closedir(direccion);
}

void renombrarArchivo(){
    char originalNombre[100], nuevoNombre[100];
    std::cout<<"Please type the name of the file to be changed: "; 
    std::cin>>originalNombre;
    if(existeArchivo(originalNombre)){
        std::cout<<"Please enter the new filename: ";
        std::cin>>nuevoNombre;
        if (rename(originalNombre,nuevoNombre)==0){
            std::cout<<"The file "<<originalNombre<<" was successfully renamed as "<<nuevoNombre<<" \n";
        }else{
            std::cout<<"Fucking asshole! The file "<<originalNombre<<" does not exist.\n";
        }
    }
}

void borrarArchivo(){
    char nombreArchivo[100];
    std::cout<<"Please type the filename to be deleted: ";
    std::cin>>nombreArchivo;
    if(existeArchivo(nombreArchivo)==true){
        if(remove(nombreArchivo)){
            std::cout<<"The file "<<nombreArchivo<<" was successfully deleted";
        }else{
            std::cout<<"Fucking asshole! The file "<<nombreArchivo<<" does not exist.\n";
        }
    }
}

bool existeArchivo(char nombreArchivo[100]){
    std::fstream archivo;
    archivo.open(nombreArchivo, std::ios::in);
    if(archivo.good()==true){
        return true;
    }else{
        return false;
    }

}

