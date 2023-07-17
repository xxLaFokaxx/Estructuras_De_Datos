#include <iostream>
using namespace std;

int main() {
    system("cls");
    int suma, a, b;
    int *PunteroA, *PunteroB;
// Asignacion de de valor y direccion a ptrA y ptrB
    cout << "Tecle el primero valor para la suma: ";
    cin >> a;
    cout << "Tecle el segundo valor para la suma: ";
    cin >> b;
// Asignar direcciona al puntero
    PunteroA = &a;
    PunteroB = &b;
//Operacion de suma
    suma = *PunteroA + *PunteroB;
    cout << "La suma de " << *PunteroA << " y " << *PunteroB << " es " << suma << endl;

    return 0;
}