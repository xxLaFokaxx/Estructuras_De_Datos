#include <iostream>
#include <string>
using namespace std;

struct Nodo {
    int dato;
    Nodo* siguiente;
};

bool colaVacia(Nodo* frente) {
    return (frente == NULL); 
}

void agregarCola(Nodo*& frente, Nodo*& fin, int n) {
    Nodo* nuevoNodo = new Nodo();
    nuevoNodo->dato = n;
    nuevoNodo->siguiente = NULL;

    if (colaVacia(frente)) {
        frente = nuevoNodo;
    } else {
        fin->siguiente = nuevoNodo;
    }
    fin = nuevoNodo;
    cout << "Elemento insertado: " << n << endl;
}

void sacarElemento(Nodo*& frente) {
    if (colaVacia(frente)) {
        cout << "La cola está vacia" << endl;
    } else {
        Nodo* aux = frente;
        frente = frente->siguiente;
        int elementoSacado = aux->dato;
        delete aux;
        cout << "Elemento sacado: " << elementoSacado << endl;
    }
}

void mostrarElementos(Nodo* frente) {
    if (colaVacia(frente)) {
        cout << "La cola esta vacia" << endl;
    } else {
        Nodo* aux = frente;
        while (aux != NULL) {
            cout << aux->dato << " ";
            aux = aux->siguiente;
        }
        cout << endl;
    }
}

void eliminarElementos(Nodo*& frente) {
    while (!colaVacia(frente)) {
        Nodo* aux = frente;
        frente = frente->siguiente;
        delete aux;
    }
    cout << "Se han eliminado todos los elementos de la cola" << endl;
}

int main() {
    system("cls");
    int opcion, dato;
    Nodo* frente = NULL;
    Nodo* fin = NULL;
while(opcion !=5){
    // Menú de opciones
    cout << "Seleccione la funcion a realizar:" << endl;
    cout << " -------------------------------- " << endl;
    cout << "|1) Insertar elemento            |" << endl;
    cout << "|2) Sacar elemento               |" << endl;
    cout << "|3) Mostrar todos los elementos  |" << endl;
    cout << "|4) Eliminar todos los elementos |" << endl;
    cout << "|5) Salir                        |" << endl;
    cout << " -------------------------------- " << endl;
    cin >> opcion;

    // Selección de la opción
    switch (opcion) {
        case 1: 
            // Opción para insertar un elemento
            cout << "Ingresa el numero para agregar a la cola: " << endl;
            cin >> dato; 
            agregarCola(frente, fin, dato);
            system("pause");
            system("cls");
            break;
        case 2:
            // Opción para sacar un elemento
            sacarElemento(frente);
            system("pause");
            system("cls");
            break;
        case 3: 
            // Opción para mostrar todos los elementos
            mostrarElementos(frente);
            system("pause");
            system("cls");
            break;
        case 4:
            // Opción para eliminar todos los elementos
            eliminarElementos(frente);
            system("pause");
            system("cls");
            break;
        case 5:
            // Salir del programa
            cout << "Saliendo..." << endl;
            system("pause");
            system("cls");
            break;
        default:
            cout << "Opcion no valida" << endl;
            system("pause");
            system("cls");
            return 0;
    }
}
    return 0;
}