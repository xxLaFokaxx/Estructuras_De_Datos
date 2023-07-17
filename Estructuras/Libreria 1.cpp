#include <iostream>
#include <string>
using namespace std;

    struct libreria{
        string titulo;
        string autor;
        int AnoPublicacion;
    }Libro[5];
    
int main() {
// Introducir datos 
    system("cls");
    for(int i= 0; i<5; i++){
        cout << "Ingresa el titulo del Libro["<<i+1<<"]: ";
        cin >> Libro[i].titulo;
        cout << "Ingrese el nombre del Autor["<<i+1<<"]: ";
        cin >> Libro[i].autor;
        cout << "Ingrese el Aho de Publicacion["<<i+1<<"]: ";
        cin >> Libro[i].AnoPublicacion;
        cout << endl;
    }
    system("cls");
// Imprimir valores
    for(int i= 0; i<5; i++){
        cout << "Nombre del Libro["<<i+1<<"]: " << Libro[i].titulo << endl;
        cout << "Nombre del Autor["<<i+1<<"]: " << Libro[i].autor << endl;
        cout << "Ano de Publicacion["<<i+1<<"]: " << Libro[i].AnoPublicacion << endl;
        cout << endl;
    } 
    return 0;
}