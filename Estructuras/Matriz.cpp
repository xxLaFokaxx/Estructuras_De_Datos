#include <iostream>
using namespace std;

int main() {
    // Cambio los enteros a decimales por si el usuario quiere decimales en la matriz 
        double matriz1[3][3], matriz2[3][3], matriz3[3][3]; 
        int FILAS = 3, COLUMNAS = 3;
    // Registrar datos para matriz 1 y 2 
        system("cls");
        cout << "Ingrese los elementos de la matriz 1:" << endl;
        for (int i = 0; i < FILAS; i++) {
            for (int j = 0; j < COLUMNAS; j++) {
                cout << "Ingrese el elemento en la posicion [" << i << "][" << j << "]: ";
                cin >> matriz1[i][j];
            }
        }
        system("cls");
        cout << "Ingrese los elementos de la matriz 2:" << endl;
        for (int i = 0; i < FILAS; i++) {
            for (int j = 0; j < COLUMNAS; j++) {
                cout << "Ingrese el elemento en la posicion [" << i << "][" << j << "]: ";
                cin >> matriz2[i][j];
            }
        }
    // Sumar las matrices 1-2 y almacenar el resultado en matriz3
        for (int i = 0; i < FILAS; i++) {
            for (int j = 0; j < COLUMNAS; j++) {
                matriz3[i][j] = matriz1[i][j] + matriz2[i][j];
            }
        }
        system("cls");
    // Confirmacion de matrices
        cout << "La matriz 1 ingresada es:" << endl;
        for (int i = 0; i < FILAS; i++) {
            for (int j = 0; j < COLUMNAS; j++) {
                cout << matriz1[i][j] << " ";
            }
            cout << endl;
        }
        cout << endl;
        cout << "La matriz 2 ingresada es:" << endl;
        for (int i = 0; i < FILAS; i++) {
            for (int j = 0; j < COLUMNAS; j++) {
                cout << matriz2[i][j] << " ";
            }
            cout << endl;
        }
        cout << endl;
    // Matriz3 producto de sumar valores por posicion
        cout << "La suma de las matrices es:" << endl;
        for (int i = 0; i < FILAS; i++) {
            for (int j = 0; j < COLUMNAS; j++) {
                cout << matriz3[i][j] << " ";
            }
            cout << endl;
        }
        return 0;
}