#include <iostream>
#include <string>
using namespace std;

    struct Consultorio{
        string MotivoDeConsulta;
        double Fecha;
        double Hora;
        double Monto;
    }Direccion[5];
int main() {
// Introducir datos 
    system("cls");
    for(int i= 0; i<5; i++){
        cout << "Capture su motivo de consulta["<< i + 1<<"]: ";
        cin >> Direccion[i].MotivoDeConsulta;
        cout << "Ingrese la fecha de su consulta["<< i + 1<<"]: "; 
        cin >> Direccion[i].Fecha;
        cout << "Ingrese la hora de su consulta["<< i + 1<<"]: "; 
        cin >> Direccion[i].Hora;
        cout << "Capture el monto a pagar["<< i + 1<<"]: ";
        cin >> Direccion[i].Monto;
        cout << endl;
    } 
    system("cls");
// Imprimir valores
    for(int i= 0; i<5; i++){
       cout << "Motivo de consulta ["<<i+1<<"]: " << Direccion[i].MotivoDeConsulta << endl;
       cout << "Fecha de consulta ["<<i+1<<"]: " << Direccion[i].Fecha << endl;
       cout << "Hora de consulta ["<<i+1<<"]: " << Direccion[i].Hora << endl;
       cout << "Monto a pagar ["<<i+1<<"]: " << Direccion[i].Monto << endl;
   }
    return 0;
}