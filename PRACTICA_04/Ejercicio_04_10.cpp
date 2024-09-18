// Materia: Programación I, Paralelo 1
// Autor: Carlos Riveros Lopez.
// Fecha creación: 16/09/2024
// Número de ejercicio: 10
// Problema planteado: Un arreglo contiene las calificaciones de un examen dado por un grupo de estudiantes, otro arreglo contiene los nombres de los mismos y un tercer arreglo contiene la sigla de la carrera. Escribir un programa que permita obtener el nombre del alumno que obtuvo la mayor y el nombre del alumno que obtuvo la nota menor, además mostrar que carrera tuvo un desempeño mayor con relación al promedio del curso.

#include <iostream>
#include <vector>
#include <string>
#include <map>
using namespace std;

// Función para encontrar el estudiante con la mayor y menor nota, y calcular el desempeño por carrera
void procesarDatos(const vector<string>& nombres, const vector<double>& calificaciones, const vector<string>& carreras) {
    if (nombres.empty() || calificaciones.empty() || carreras.empty()) {
        cout << "No hay datos para procesar." << endl;
        return;
    }

    int indiceMayor = 0;
    int indiceMenor = 0;
    double sumaCalificaciones = 0;
    map<string, pair<double, int>> rendimientoCarreras;  

    for (int i = 0; i < calificaciones.size(); i++) {
        sumaCalificaciones += calificaciones[i];

        if (calificaciones[i] > calificaciones[indiceMayor]) {
            indiceMayor = i;
        }
        if (calificaciones[i] < calificaciones[indiceMenor]) {
            indiceMenor = i;
        }

        if (rendimientoCarreras.find(carreras[i]) == rendimientoCarreras.end()) {
            rendimientoCarreras[carreras[i]] = {calificaciones[i], 1};
        } else {
            rendimientoCarreras[carreras[i]].first += calificaciones[i];
            rendimientoCarreras[carreras[i]].second += 1;
        }
    }

    double promedioCurso = sumaCalificaciones / calificaciones.size();
    string mejorCarrera;
    double mejorDesempeno = -1.0;

    for (const auto& entry : rendimientoCarreras) {
        string carrera = entry.first;
        double promedioCarrera = entry.second.first / entry.second.second;

        if (promedioCarrera > mejorDesempeno) {
            mejorDesempeno = promedioCarrera;
            mejorCarrera = carrera;
        }
    }
    cout << "El alumno con la mayor calificación es: " << nombres[indiceMayor] << " con una nota de " << calificaciones[indiceMayor] << endl;
    cout << "El alumno con la menor calificación es: " << nombres[indiceMenor] << " con una nota de " << calificaciones[indiceMenor] << endl;
    cout << "La carrera con mejor desempeño es: " << mejorCarrera << " con un promedio de " << mejorDesempeno << endl;
}

int main() {
    vector<string> nombres = {"Juan", "Maria", "Pedro", "Ana", "Luis"};
    vector<double> calificaciones = {85.5, 92.0, 76.5, 88.0, 90.5};
    vector<string> carreras = {"CS", "ENG", "CS", "MED", "ENG"};
    procesarDatos(nombres, calificaciones, carreras);
    return 0;
}
