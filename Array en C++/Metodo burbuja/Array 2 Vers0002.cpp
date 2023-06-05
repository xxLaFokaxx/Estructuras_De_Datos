#include <iostream>
#include <string>
using namespace std;

int main(){
    int Matriculas[5], aux1;
    double calf1[5], calf2[5], calf3[5], calf4[5], calf5[5], promedio[5], totalp=0, promediog, aux;
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
    // Metodo burbuja para Promdeio Min y Max
    for (int i=0; i<4; i++){
        for(int j=i+1; j<5; j++){
            if (promedio[i] > promedio[j]){
                aux = promedio[i];
                promedio[i] = promedio[j];
                promedio[j] = aux;
                //Calificicacion 1 
                aux = calf1[i];
                calf1[i] = calf1[j];
                calf1[j] = aux;
                //Calificicacion 2
                aux = calf2[i];
                calf2[i] = calf2[j];
                calf2[j] = aux;
                //Calificicacion 3
                aux = calf3[i];
                calf3[i] = calf3[j];
                calf3[j] = aux;
                 //Calificicacion 4
                aux = calf4[i];
                calf4[i] = calf4[j];
                calf4[j] = aux;
                // Matricula 
                aux1 = Matriculas[i];
                Matriculas[i] = Matriculas[j];
                Matriculas[j] = aux1;
            }
        }
    }
    double promedioMinimo = promedio[0];
    double promedioMaximo = promedio[4];
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
    cout << "                  " <<endl;
    // Mensajes para mostrar el promedio mínimo y máximo
    cout << "Promedio general: " << totalp/5 << endl;
    cout << "Promedio minimo: " << promedioMinimo << endl;
    cout << "Promedio maximo: " << promedioMaximo << endl;
    
    return 0; 
}
