#include <iostream>
#include <string>
using namespace std;
int main() {
// Declaracion de Variables
    system("cls");
    int a, *puntero, resultado;
    cout << "Ingresa un valor entero: " << endl;
    cin >> a;
    puntero = &a;
    resultado = (*puntero %2);
    cout << "Valor de resultado: "<< resultado << endl;
// Comparar con 0 usando if y else
    if(resultado == 0){
        cout << "El numero es par" << endl;
    }else{
        cout << "El numero es impar" << endl;
        }
    return 0;
}