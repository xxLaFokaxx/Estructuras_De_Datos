#include <iostream>
#include <string>
using namespace std;

    struct Consultorio{
        string MotivoDeConsulta;
        double Fecha;
        double Hora;
        double Monto;
    }Direccion[5];
// Estructura para ingresar datos
    void  IngresarDatos(Consultorio& Direccion){
        cout << "Capture su motivo de consulta: ";
        cin >> Direccion.MotivoDeConsulta;
        cout << "Ingrese la fecha de su consulta: "; 
        cin >> Direccion.Fecha;
        cout << "Ingrese la hora de su consulta: "; 
        cin >> Direccion.Hora;
        cout << "Capture el monto a pagar: ";
        cin >> Direccion.Monto;
        cout << endl;
    }
// Estructura para Imprimir Datos
    void ImprimirDatos(Consultorio& Direccion){
       cout << "Motivo de consulta : " << Direccion.MotivoDeConsulta << endl;
       cout << "Fecha de consulta : " << Direccion.Fecha << endl;
       cout << "Hora de consulta : " << Direccion.Hora << endl;
       cout << "Monto a pagar : " << Direccion.Monto << endl;
    }
int main() {
    system("cls");
// Introducir valores
    for(int i= 0; i<5; i++){
        IngresarDatos(Direccion[i]);
    }
    
    system("cls");
//Imprimir valores
    for(int i= 0; i<5; i++){
       ImprimirDatos(Direccion[i]);
   }
    return 0;
}