#include <iostream>
#include <stack>
using namespace std;
int main() {
   stack<int>pila;
   stack<int>pila2;
   stack<int>pila3;
   int numero, suma;
   char continuar;
   do{
// Agregar valores pila 1
        cout<< "Ingrese un numero entero para pila 1: ";
        cin >> numero;
        pila.push(numero);
// Agregar valores pila 2
        cout<< "Ingrese un numero entero para pila 2: ";
        cin >> numero;
        pila2.push(numero);
// Pregunta para agregar valores
        cout << "Desea agrgar otro numero? (s/n): ";
        cin >> continuar;
   }while (continuar =='s' || continuar =='S');

    while(!pila.empty() && !pila2.empty()){
        suma= pila.top()+pila2.top();
        pila3.push(suma);
        pila.pop();
        pila2.pop();
    }
// Valores en pila
        cout << "Producto de la suma entre pila 1 y pila 2: " << endl;
   while (!pila3.empty()){
        cout << pila3.top() << endl;
        pila3.pop();
   }

    return 0;
}