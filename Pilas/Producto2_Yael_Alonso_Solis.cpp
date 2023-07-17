#include <iostream>
#include <string>
using namespace std;
// Estructura de Nodo para requeriminetos //
struct Nodo {
    string nombre;
    double precio;
    int piezas;
    double total;
    Nodo* siguiente;
};
// Estructura para agregar Piala //
void agregarPila(Nodo*& pila, string nombre, double precio, int piezas) {
    Nodo* nuevoNodo = new Nodo();
    nuevoNodo->nombre = nombre;
    nuevoNodo->precio = precio;
    nuevoNodo->piezas = piezas;
    nuevoNodo->total = precio * piezas;
    nuevoNodo->siguiente = pila;
    pila = nuevoNodo;
}
// Estructura para sacar pila //
void sacarPila(Nodo*& pila, string& nombre, double& precio, int& piezas, double& total) {
    Nodo* aux = pila;
    nombre = aux->nombre;
    precio = aux->precio;
    piezas = aux->piezas;
    total = aux->total;
    pila = aux->siguiente;
    delete aux;
}

int main() {
    system("cls");
    Nodo* pila = NULL;
    string nombre;
    double precio;
    int piezas;
    string respuesta = "si";
// Ingresar valores dentro de pila
    while (respuesta == "si") {
        cout << "Ingrese el nombre del producto: ";
        cin >> nombre;
        cout << "Ingrese el precio del producto: ";
        cin >> precio;
        cout << "Ingrese la cantidad de piezas del producto: ";
        cin >> piezas;
        agregarPila(pila, nombre, precio, piezas);
        cout << "Desea ingresar otro producto? (si/no): ";
        cin >> respuesta;
    }
    
// Mostrar valores dentro de pila
    cout << "\nDatos ingresados a la pila:\n";
    while (pila != NULL) {
        double total; 
        sacarPila(pila, nombre, precio, piezas, total);
        cout << "Nombre: " << nombre << endl;
        cout << "Precio: " << precio << endl;
        cout << "Piezas: " << piezas << endl;
        cout << "Total: " << total << endl;
        cout << endl;
    }

    return 0;
}
