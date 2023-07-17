#include <iostream>
#include <string>
using namespace std;
// Estrucutura de Nodo
    struct Nodo{
        int dato;
        Nodo*siguiente;
    };
void agregarPila(Nodo*&pila, int n){
    Nodo*nuevoNodo = new Nodo();
    nuevoNodo -> dato = n;
    nuevoNodo -> siguiente = pila;
    pila = nuevoNodo;
}
void sacarPila(Nodo*&pila,int &n){
    Nodo*aux=pila;
    n = aux ->dato;
    pila = aux -> siguiente;
    delete aux;
}
int main() {
    Nodo *pila = NULL; 
    int n;
    string respuesta = "si";
    while (respuesta == "si")
    {
    cout << "Ingresa un valor: "<< endl;
    cin >> n;
    agregarPila(pila, n);
    cout << "Desea ingresar otro dato: " << endl;
    cin >> respuesta;
    }
    while (pila != NULL){
        sacarPila(pila,n);
        if(pila !=NULL){
            cout << n <<endl;
        }else{
            cout << n << endl;
        }
    }
    return 0;
}