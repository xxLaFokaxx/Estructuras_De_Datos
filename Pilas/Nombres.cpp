#include <iostream>
#include <string>

using namespace std;

// Estrucutura de Nodo
struct Nodo {
    string dato;
    Nodo* siguiente;
};

void agregarPila(Nodo*& pila, string valor) {
    Nodo* nuevoNodo = new Nodo();
    nuevoNodo->dato = valor;
    nuevoNodo->siguiente = pila;
    pila = nuevoNodo;
}

void sacarPila(Nodo*& pila, string& dato) {
    Nodo* aux = pila;
    dato = aux->dato;
    pila = aux->siguiente;
    delete aux;
}

int main() {
    Nodo* pila = NULL;
    string valor;
    string respuesta = "si";

    while (respuesta == "si") {
        cout << "Ingrese un nombre: " << endl;
        cin >> valor;
        agregarPila(pila, valor);
        cout << "Desea ingresar otro nombre? (si o no)" << endl;
        cin >> respuesta;
    }

    while (pila != NULL) {
        sacarPila(pila, valor);
        if (pila != NULL) {
            cout << valor << endl;
        } else {
            cout << valor << endl;
        }
    }

    return 0;
}