#include <iostream>
#include <string>
using namespace std;

struct Orden {
    string nombreProducto;
    int unidades;
    float precioUnitario;
    float precioTotal;
};

struct Nodo {
    Orden dato;
    Nodo* siguiente;
};

bool colaVacia(Nodo* frente) {
    return (frente == NULL); 
}

void agregarCola(Nodo*& frente, Nodo*& fin, Orden orden) {
    Nodo* nuevoNodo = new Nodo();
    nuevoNodo->dato = orden;
    nuevoNodo->siguiente = NULL;

    if (colaVacia(frente)) {
        frente = nuevoNodo;
    } else {
        fin->siguiente = nuevoNodo;
    }
    fin = nuevoNodo;
    cout << "Orden insertada: " << orden.nombreProducto << endl;
}

void sacarElemento(Nodo*& frente) {
    if (colaVacia(frente)) {
        cout << "La cola esta vacia" << endl;
    } else {
        Nodo* aux = frente;
        frente = frente->siguiente;
        Orden ordenSacada = aux->dato;
        delete aux;
        cout << "Orden sacada: " << ordenSacada.nombreProducto << endl;
    }
}

void mostrarElementos(Nodo* frente) {
    if (colaVacia(frente)) {
        cout << "La cola esta vacia" << endl;
    } else {
        Nodo* aux = frente;
        while (aux != NULL) {
            cout << "Producto: " << aux->dato.nombreProducto << endl;
            cout << "Unidades: " << aux->dato.unidades << endl;
            cout << "Precio unitario: " << aux->dato.precioUnitario << endl;
            cout << "Precio total: " << aux->dato.precioTotal << endl;
            aux = aux->siguiente;
        }
    }
}

void eliminarElementos(Nodo*& frente) {
    while (!colaVacia(frente)) {
        Nodo* aux = frente;
        frente = frente->siguiente;
        delete aux;
    }
    cout << "Se han eliminado todas las ordenes de la cola" << endl;
}

void calcularPrecioTotal(Orden& orden) {
    orden.precioTotal = orden.unidades * orden.precioUnitario;
}

int main() {
    system("cls");
    int opcion;
    Nodo* frente = NULL;
    Nodo* fin = NULL;
    while(opcion !=5){
        // Menú de opciones
        cout << "Seleccione la funcion a realizar:" << endl;
        cout << " -------------------------------- " << endl;
        cout << "|1) Insertar orden               |" << endl;
        cout << "|2) Sacar orden                  |" << endl;
        cout << "|3) Mostrar todas las ordenes    |" << endl;
        cout << "|4) Eliminar todas las ordenes   |" << endl;
        cout << "|5) Salir                        |" << endl;
        cout << " -------------------------------- " << endl;
        cin >> opcion;

        // Selección de la opción
        switch (opcion) {
            case 1: 
                // Opción para insertar una orden
                {
                    Orden orden;
                    cout << "Ingresa el nombre del producto: " << endl;
                    cin >> orden.nombreProducto;
                    cout << "Ingresa el numero de unidades: " << endl;
                    cin >> orden.unidades;
                    cout << "Ingresa el precio unitario: " << endl;
                    cin >> orden.precioUnitario;
                    calcularPrecioTotal(orden);
                    agregarCola(frente, fin, orden);
                    system("pause");
                    system("cls");
                    break;
                }
            case 2:
                // Opción para sacar una orden
                sacarElemento(frente);
                system("pause");
                system("cls");
                break;
            case 3: 
                // Opción para mostrar todas las ordenes
                mostrarElementos(frente);
                system("pause");
                system("cls");
                break;
            case 4:
                // Opción para eliminar todas las ordenes
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