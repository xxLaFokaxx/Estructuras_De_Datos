#include <iostream>
#include <string>
using namespace std;
// Estrucutura de Nodo
    struct Nodo{
        double dato; 
        Nodo*siguiente;
    };
void agregarPila(Nodo*&pila, double n){
    Nodo*nuevoNodo = new Nodo();
    nuevoNodo -> dato = n; 
    nuevoNodo -> siguiente = pila;
    pila = nuevoNodo;
}
void sacarPila(Nodo*&pila,double &n){
    Nodo*aux=pila;
    n = aux ->dato; 
    pila = aux -> siguiente;
    delete aux;
}
int main() {
    Nodo *pila = NULL; 
    double n; 
    string respuesta = "si";
    while (respuesta == "si")
    {
    cout << "Ingresa un valor decimal: "<< endl;
    cin >> n;
    agregarPila(pila, n); 
    cout << "Desea ingresar otro valor decimal: " << endl;
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
