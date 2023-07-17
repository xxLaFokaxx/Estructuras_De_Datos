#include <iostream>
using namespace std;

bool NumeroPrimo(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    system("cls");
    int numero;
    int *puntero;

    cout << "Ingrese un numero: ";
    cin >> numero;

    puntero = &numero;
    cout << "El numero " << *puntero << " esta en la posicion de memoria " << puntero << "." << endl;
// Comparacion para mostrar mensajes
    if (NumeroPrimo(numero)) {
        cout << numero << " es un numero primo." << endl;
    } else {
        cout << numero << " no es un numero primo." << endl;
    }

    return 0;
}