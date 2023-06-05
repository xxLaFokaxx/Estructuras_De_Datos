#include <iostream>
#include <string>
using namespace std;

int main(){
    int Matriculas[5];
    double calf1[5], calf2[5], calf3[5], calf4[5], calf5[5], promedio[5], totalp=0, promediog;
    system("cls");
    //Calificaciones de 1 a 4
    for(int i=0; i<5; i++){
        cout << "Ingresa los valores en la posicion ["<<i+1<<"]" << endl;
        cout << "Ingresa la matricula del alumno: "; cin>>Matriculas[i];
        cout << "Ingresa la calificacion 1: "; cin>>calf1[i];
        cout << "Ingresa la calificacion 2: "; cin>>calf2[i];
        cout << "Ingresa la calificacion 3: "; cin>>calf3[i];
        cout << "Ingresa la calificacion 4: "; cin>>calf4[i];
        system("cls");
    }
    //Promedio de 4 calificaciones
    for(int i=0; i<5; i++){
        promedio[i] = (calf1[i]+calf2[i]+calf3[i]+calf4[i])/4;
        totalp = totalp + promedio[i];
    }
    //Mensajes
    for(int i=0; i<5; i++){
        cout << "                  " <<endl;
        cout << "Alumno["<<i+1<<"]" << endl;
        cout << "Matricula: " << Matriculas[i] << endl;
        cout << "Calificacion 1: " << calf1[i] << endl;
        cout << "Calificacion 2: " << calf2[i] << endl;
        cout << "Calificacion 3: " << calf3[i] << endl;
        cout << "Calificacion 4: " << calf4[i] << endl;
        cout << "Promedio: " << promedio[i] << endl;
        
    }
    //Agrega los mensajes para mostrar el promedio mínimo y máximo
    cout << "Promedio general: " << promediog << endl;
    return 0; 
}
