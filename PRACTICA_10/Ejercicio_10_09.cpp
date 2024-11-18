
/* Materia: Programación I, Paralelo 1
Autor: Carlos Riveros Lopez.
Fecha creación: 12/11/2024
Número de ejercicio: 9
Problema planteado: Calificaciones Curso
Desarrollo: Se desea calcular las notas finales de N alumnos de un curso, así como también el promedio, mínimo y máximo de éstas. Se recibirá el número de alumnos y las notas parciales de cada uno de éstos. Las notas parciales corresponden a la T1, T2, T3, T4 y EF. La nota final se calcula empleando la fórmula:
NF = 0.7*NP + 0.3*EF
En donde NP es la nota de presentación calculada como:
NP = (T1+T2+T3+T4)/4      */

#include <iostream>
#include <vector>
#include <limits>

using namespace std;

struct Alumno {
    string nombre;
    double T1, T2, T3, T4, EF;  
    double NF;  
};

// Función para calcular la nota de presentación (NP)
double calcularNP(double T1, double T2, double T3, double T4) {
    return (T1 + T2 + T3 + T4) / 4.0;
}

// Función para calcular la nota final (NF)
double calcularNF(double NP, double EF) {
    return 0.7 * NP + 0.3 * EF;
}

int main() {
    int N;  
    cout << "Ingrese el número de alumnos: ";
    cin >> N;
    cin.ignore();

    vector<Alumno> alumnos(N);
    double sumaNotasFinales = 0, notaMinima = numeric_limits<double>::max(), notaMaxima = numeric_limits<double>::min();

    for (int i = 0; i < N; ++i) {
        cout << "\nAlumno " << i + 1 << ":\n";
        cout << "Ingrese el nombre del alumno: ";
        getline(cin, alumnos[i].nombre);

        cout << "Ingrese las notas parciales (T1, T2, T3, T4): ";
        cin >> alumnos[i].T1 >> alumnos[i].T2 >> alumnos[i].T3 >> alumnos[i].T4;

        cout << "Ingrese la nota del examen final (EF): ";
        cin >> alumnos[i].EF;

        // Calcular la nota de presentación (NP)
        double NP = calcularNP(alumnos[i].T1, alumnos[i].T2, alumnos[i].T3, alumnos[i].T4);

        // Calcular la nota final (NF)
        alumnos[i].NF = calcularNF(NP, alumnos[i].EF);

        sumaNotasFinales += alumnos[i].NF;
        if (alumnos[i].NF < notaMinima) {
            notaMinima = alumnos[i].NF;
        }
        if (alumnos[i].NF > notaMaxima) {
            notaMaxima = alumnos[i].NF;
        }
        cin.ignore();
    }
    cout << "\nNotas finales de los alumnos:\n";
    for (int i = 0; i < N; ++i) {
        cout << "Alumno: " << alumnos[i].nombre << " | Nota final: " << alumnos[i].NF << endl;
    }

    double promedio = sumaNotasFinales / N;
    cout << "\nEstadísticas del curso:\n";
    cout << "Promedio de las notas finales: " << promedio << endl;
    cout << "Nota mínima: " << notaMinima << endl;
    cout << "Nota máxima: " << notaMaxima << endl;

    return 0;
}

