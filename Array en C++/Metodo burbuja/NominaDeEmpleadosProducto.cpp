#include <iostream>
#include <string>
using namespace std;

// Definición de la estructura Empleado
struct Empleado {
    int matricula;
    double horast;
    double pagoh;
    double sueldo;
};

// Función para ordenar los empleados por su número de matrícula usando metodo burbuja
void ordenarEmpleados(Empleado empleados[], int totalEmpleados) {
    bool intercambio = false;
    do {
        intercambio = false;
        for (int i = 0; i < totalEmpleados - 1; i++) {
            if (empleados[i].matricula > empleados[i + 1].matricula) {
                // Intercambiar empleados
                Empleado temp = empleados[i];
                empleados[i] = empleados[i + 1];
                empleados[i + 1] = temp;
                intercambio = true;
            }
        }
    } while (intercambio);
}

int main() {
    system("cls");

    int limiteEmpleados;
    cout << "Ingrese el limite de empleados: ";
    cin >> limiteEmpleados;

    // Declaración del arreglo de empleados
    Empleado empleados[limiteEmpleados];
    int totalEmpleados = 0;
    string respuesta;
    system("cls");
    do {
        cout << "       NOMINA DE EMPLEADOS       " << endl;
        cout << "---------------------------------" << endl;
        cout << "| 1) Ingresar datos por usuario |" << endl;
        cout << "| 2) Buscar datos               |" << endl;
        cout << "| 3) Modificar datos            |" << endl;
        cout << "| 4) Eliminar datos             |" << endl;
        cout << "| 5) Imprimir el total de datos |" << endl;
        cout << "---------------------------------" << endl;
        cout << "Selecciona y captura la opcion: ";
        int opcion;
        cin >> opcion;

        switch (opcion) {
            case 1: {
                cout << "Captura el numero de empleado: ";
                cin >> empleados[totalEmpleados].matricula;
                cout << "Captura las horas trabajadas: ";
                cin >> empleados[totalEmpleados].horast;
                cout << "Captura el pago por hora: ";
                cin >> empleados[totalEmpleados].pagoh;
                empleados[totalEmpleados].sueldo = empleados[totalEmpleados].horast * empleados[totalEmpleados].pagoh;
                cout << "Sueldo de empleado: " << empleados[totalEmpleados].sueldo << endl;
                totalEmpleados++;
                break;
            }
            case 2: {
                int buscar;
                bool encontrado = false;
                cout << "Ingrese el numero de empleado a buscar: ";
                cin >> buscar;
                for (int i = 0; i < totalEmpleados; i++) {
                    if (empleados[i].matricula == buscar) {
                        encontrado = true;
                        cout << "Los datos del empleado son:" << endl;
                        cout << "Numero de empleado: " << empleados[i].matricula << endl;
                        cout << "Horas trabajadas: " << empleados[i].horast << endl;
                        cout << "Pago por hora: " << empleados[i].pagoh << endl;
                        cout << "Sueldo: " << empleados[i].sueldo << endl;
                        break;
                    }
                }
                if (!encontrado) {
                    cout << "Empleado no encontrado" << endl;
                }
                break;
            }
            case 3: {
                int modificar;
                bool modificado = false;
                cout << "Ingrese el numero de empleado a modificar: ";
                cin >> modificar;
                for (int i = 0; i < totalEmpleados; i++) {
                    if (empleados[i].matricula == modificar) {
                        modificado = true;
                        cout << "Los datos del empleado son:" << endl;
                        cout << "Numero de empleado: " << empleados[i].matricula << endl;
                        cout << "Horas trabajadas: " << empleados[i].horast << endl;
                        cout << "Pago por hora: " << empleados[i].pagoh << endl;
                        cout << "Sueldo: " << empleados[i].sueldo << endl;
                        cout << "Ingrese las nuevas horas trabajadas: ";
                        cin >> empleados[i].horast;
                        cout << "Ingrese el nuevo pago por hora: ";
                        cin >> empleados[i].pagoh;
                        empleados[i].sueldo = empleados[i].horast * empleados[i].pagoh;
                        cout << "Los nuevos datos del empleado son:" << endl;
                        cout << "Numero de empleado: " << empleados[i].matricula << endl;
                        cout << "Horas trabajadas: " << empleados[i].horast << endl;
                        cout << "Pago por hora: " << empleados[i].pagoh << endl;
                        cout << "Sueldo: " << empleados[i].sueldo << endl;
                        break;
                    }
                }
                if (!modificado) {
                    cout << "Empleado no encontrado" << endl;
                }
                break;
            }
            case 4: {
                int eliminar;
                bool eliminado = false;
                cout << "Ingrese el numero de empleado a eliminar: ";
                cin >> eliminar;
                for (int i = 0; i < totalEmpleados; i++) {
                    if (empleados[i].matricula == eliminar) {
                        eliminado = true;
                        // Eliminar empleado desplazando los elementos hacia la izquierda
                        for (int j = i; j < totalEmpleados - 1; j++) {
                            empleados[j] = empleados[j + 1];
                        }
                        totalEmpleados--;
                        break;
                    }
                }
                if (eliminado) {
                    cout << "Empleado eliminado exitosamente" << endl;
                } else {
                    cout << "Empleado no encontrado" << endl;
                }
                break;
            }
            case 5: {
                // Ordenar empleados por su número de matrícula antes de imprimirlos
                ordenarEmpleados(empleados, totalEmpleados);

                // Imprimir los datos de los empleados
                for (int i = 0; i < totalEmpleados; i++) {
                    cout << "Datos del empleado " << (i + 1) << ":" << endl;
                    cout << "Numero de empleado: " << empleados[i].matricula << endl;
                    cout << "Horas trabajadas: " << empleados[i].horast << endl;
                    cout << "Pago por hora: " << empleados[i].pagoh << endl;
                    cout << "Sueldo: " << empleados[i].sueldo << endl;
                    cout << endl;
                }
                break;
            }
            default:
                cout << "Opcion no valida." << endl;
                break;
        }

        cout << "Deseas regresar al menu? (si/no): ";
        cin >> respuesta;
    } while (respuesta == "si" || respuesta == "SI");

    return 0;
}