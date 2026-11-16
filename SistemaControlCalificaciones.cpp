#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
   
    string repetir;

    do {

    int cantidadEstudiantes;
    int aprobados = 0;
    int reprobados = 0;

    double sumaPromedios = 0;
    double promedioGrupo;

    double mejorPromedio = -1;
    string mejorEstudiante;

    
    cout << " SISTEMA DE CONTROL DE CALIFICACIONES" << endl;
  

    // Validar la cantidad de estudiantes.
    do {
        cout << "\nCantidad de estudiantes: ";
        cin >> cantidadEstudiantes;

        if (cantidadEstudiantes <= 0) {
            cout << "Error: debe ingresar un numero mayor que 0." << endl;
        }

    } while (cantidadEstudiantes <= 0);

    // Recorrer todos los estudiantes del grupo.
    for (int estudiante = 1;
        estudiante <= cantidadEstudiantes;
        estudiante++) {

        cout << "\n Estudiante " << estudiante << "" << endl;

        string nombre;

        cout << "Nombre: ";
        cin >> ws;
        getline(cin, nombre);

        double nota;
        double sumaNotas = 0;
        double promedio;



        // Solicitar y validar las cuatro calificaciones.
        for (int i = 1; i <= 4; i++) {

            do {
                cout << "Calificacion " << i << ": ";
                cin >> nota;

                if (nota < 0 || nota > 100) {
                    cout << "Error: la calificacion debe estar entre 0 y 100." << endl;
                }

            } while (nota < 0 || nota > 100);

            sumaNotas = sumaNotas + nota;
        }
        // Calcular el promedio del estudiante.
        promedio = sumaNotas / 4;

        cout << fixed << setprecision(2);

        cout << "Promedio: " << promedio << endl;

        // Determinar si el estudiante aprobo o reprobo.
        if (promedio >= 70) {
            cout << "Estado: Aprobado" << endl;
            aprobados++;
        }
        else {
            cout << "Estado: Reprobado" << endl;
            reprobados++;
        }

        // Acumular los promedios del grupo.
        sumaPromedios = sumaPromedios + promedio;

        // Identificar al estudiante con el promedio mas alto.
        if (promedio > mejorPromedio) {
            mejorPromedio = promedio;
            mejorEstudiante = nombre;
        }

    }

    // Calcular el promedio general del grupo.
    promedioGrupo = sumaPromedios / cantidadEstudiantes;

    // Mostrar el resumen del grupo.
    cout << "\n RESUMEN DEL GRUPO" << endl;

    cout << "Cantidad de aprobados: " << aprobados << endl;
    cout << "Cantidad de reprobados: " << reprobados << endl;

    cout << fixed << setprecision(2);

    cout << "Promedio general: " << promedioGrupo << endl;

    cout << "Mejor estudiante: " << mejorEstudiante << endl;
    cout << "Mejor promedio: " << mejorPromedio << endl;

    // Preguntar si desea procesar otro grupo.
    do {
        cout << "\n¿Desea procesar otro grupo? (si/no): ";
        cin >> repetir;

        if (repetir != "si" && repetir != "SI" &&
            repetir != "no" && repetir != "NO") {
            cout << "Error: escriba si o no." << endl;
        }

    } while (repetir != "si" && repetir != "SI" &&
        repetir != "no" && repetir != "NO");

    } while (repetir == "si" || repetir == "SI");

    return 0;
}
   