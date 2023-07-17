#include <iostream>
using namespace std;

int main() {
//Declaracion de array y variables}
    system("cls");
    int Numeros[5];
    int *puntero;
// Mensaje para solicitar datos
    cout << "Ingrese 5 datos enteros:" << endl;
    for (int i = 0; i < 5; i++) {
        cin >> Numeros[i];
    }
    puntero = &Numeros[2];
    cout << "La direccion de memoria de array[2] es " << puntero << endl;
    cout << "El valor de array[2] es " << *puntero << endl;

    return 0;
}
