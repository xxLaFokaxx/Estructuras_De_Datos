#include <iostream>
#include <string>
using namespace std;

    struct libreria{
        string titulo;
        string autor;
        int AnoPublicacion;
    }Libro[5];
// Estructura para ingresar datos
    void  IngresarDatos(libreria& Libro){
        cout << "Ingresa el titulo del Libro: ";
        cin >> Libro.titulo;
        cout << "Ingrese el nombre del Autor: ";
        cin >> Libro.autor;
        cout << "Ingrese el Aho de Publicacion: ";
        cin >> Libro.AnoPublicacion;
        cout << endl;
    }
// Estructura para Imprimir Datos
    void ImprimirDatos(libreria& Libro){
        cout << "Nombre del Libro: " << Libro.titulo << endl;
        cout << "Nombre del Autor: " << Libro.autor << endl;
        cout << "Ano de Publicacion: " << Libro.AnoPublicacion << endl;
        cout << endl;
    }
    
int main() {
    system("cls");
// Introducir valores
    for(int i= 0; i<5; i++){
        IngresarDatos(Libro[i]);
    }
    system("cls");
//Imprimir valores
    for(int i= 0; i<5; i++){
        ImprimirDatos(Libro[i]);
    }
    
    return 0;
}
