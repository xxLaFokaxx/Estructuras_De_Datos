#include <iostream>
using namespace std;

int main() {
system("cls");
//Declaracion de array y variables
    int Numeros[5];
    int *puntero;
    int indice;
// Mensaje para solicitar datos
    cout << "Ingrese 5 datos enteros:" << endl;
    for (int i = 0; i < 5; i++) {
        cin >> Numeros[i];
    }
// Valor a Modificar en array
    cout << "Ingrese el indice del arreglo que desea modificar (0-4): ";
    cin >> indice;
    puntero = &Numeros[indice];
    cout << "La direccion de memoria de Numeros[" << indice << "] es " << puntero << endl;
    cout << "El valor de Numeros[" << indice << "] es " << *puntero << endl;
// Colocar valor modificado en array
    cout << "Ingrese el nuevo valor para Numeros[" << indice << "]: ";
    cin >> *puntero;
// Confirmacion de valor modificado
    cout << "El nuevo valor de Numeros[" << indice << "] es " << Numeros[indice] << endl;
    return 0;
}