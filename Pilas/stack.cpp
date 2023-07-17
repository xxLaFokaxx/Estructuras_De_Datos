#include <iostream>
#include <stack>
using namespace std;
int main() {
   stack<int>pila;
   int numero;
   char continuar;
   do{
        cout<< "Ingrese un numero entero: ";
        cin >> numero;
        pila.push(numero);
        cout << "Desea agrgar otro numero? (s/n): ";
        cin >> continuar;
   }while (continuar =='s' || continuar =='S');
        cout << "Numeros ingresados en la pila:" << endl;
   while (!pila.empty()){
        cout << pila.top() << endl;
        pila.pop();
   }
    return 0;
}