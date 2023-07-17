#include <iostream>
#include <string>
using namespace std;

struct Cliente {
    string folio;
    string nombre;
};

struct Nodo {
    Cliente cliente;
    Nodo* siguiente;
};

bool colaVacia(Nodo* frente) {
    return (frente == NULL); 
}

void agregarCola(Nodo*& frente, Nodo*& fin, Cliente cliente) {
    Nodo* nuevoNodo = new Nodo();
    nuevoNodo->cliente = cliente;
    nuevoNodo->siguiente = NULL;

    if (colaVacia(frente)) {
        frente = nuevoNodo;
    } else {
        fin->siguiente = nuevoNodo;
    }
    fin = nuevoNodo;
    cout << "Cliente insertado correctamente" << endl;
}

void sacarElemento(Nodo*& frente) {
    if (colaVacia(frente)) {
        cout << "La cola esta vacia" << endl;
    } else {
        Nodo* aux = frente;
        frente = frente->siguiente;
        Cliente clienteSacado = aux->cliente;
        delete aux;
        cout << "Cliente sacado: " << clienteSacado.folio << " " << clienteSacado.nombre << endl;
    }
}

void mostrarElementos(Nodo* frente) {
    if (colaVacia(frente)) {
        cout << "La cola esta vacia" << endl;
    } else {
        Nodo* aux = frente;
        while (aux != NULL) {
            Cliente cliente = aux->cliente;
            cout << cliente.folio << " " << cliente.nombre << endl;
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
    cout << "Se han eliminado todos los clientes de la cola" << endl;
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
        cout << "|1) Insertar cliente             |" << endl;
        cout << "|2) Sacar cliente                |" << endl;
        cout << "|3) Mostrar todos los clientes   |" << endl;
        cout << "|4) Eliminar todos los clientes  |" << endl;
        cout << "|5) Salir                        |" << endl;
        cout << " -------------------------------- " << endl;
        cin >> opcion;

        // Selección de la opción
        switch (opcion) {
            case 1: 
                // Opción para insertar un cliente
                {
                    string folio, nombre;
                    cout << "Ingresa el folio del cliente: " << endl;
                    cin >> folio;
                    cout << "Ingresa el nombre del cliente: " << endl;
                    cin >> nombre;
                    Cliente cliente = {folio, nombre};
                    agregarCola(frente, fin, cliente);
                    system("pause");
                    system("cls");
                }
                break;
            case 2:
                // Opción para sacar un cliente
                sacarElemento(frente);
                system("pause");
                system("cls");
                break;
            case 3: 
                // Opción para mostrar todos los clientes
                mostrarElementos(frente);
                system("pause");
                system("cls");
                break;
            case 4:
                // Opción para eliminar todos los clientes
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