// Materia: Programación I, Paralelo 1
// Autor: Carlos Riveros Lopez.
// Fecha creación: 16/09/2024
// Número de ejercicio: 3
// Problema planteado:3. Escriba un programa para introducir los N números enteros en un arreglo llamado calificaciones. Después que todos los números son introducidos y se obtiene la suma total de calificaciones, calcule el promedio de los números y use el promedio para determinar la desviación de cada valor del promedio. Almacene cada desviación en un arreglo llamado desviación. Cada desviación se obtiene como el valor del elemento menos el promedio de todos los datos. Haga que su programa despliegue cada desviación al lado de su elemento correspondiente del arreglo calificaciones.Calcule la varianza de los datos usados. La varianza se obtiene elevando al cuadrado cada desviación individual y dividiendo la suma de las desviaciones cuadradas entre el número de desviaciones.

#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

// Función para ingresar las calificaciones
void ingresarCalificaciones(vector<int>& calificaciones, int N) {
    for(int i = 0; i < N; i++) {
        int cal;
        cout << "Ingresa la calificación " << i + 1 << ": ";
        cin >> cal;
        calificaciones.push_back(cal);
    }
}

double calcularPromedio(const vector<int>& calificaciones) {
    double suma = 0;
    for(int cal : calificaciones) {
        suma += cal;
    }
    return suma / calificaciones.size();
}

void calcularDesviaciones(const vector<int>& calificaciones, vector<double>& desviaciones, double promedio) {
    for(int cal : calificaciones) {
        desviaciones.push_back(cal - promedio);
    }
}

double calcularVarianza(const vector<double>& desviaciones) {
    double sumaCuadrados = 0;
    for(double desv : desviaciones) {
        sumaCuadrados += pow(desv, 2);
    }
    return sumaCuadrados / desviaciones.size();
}

int main() {
    int N;
    cout << "¿Cuántas calificaciones deseas ingresar? ";
    cin >> N;

    vector<int> calificaciones;
    vector<double> desviaciones;

    ingresarCalificaciones(calificaciones, N);

    double promedio = calcularPromedio(calificaciones);
    cout << "Promedio de las calificaciones: " << promedio << endl;

    calcularDesviaciones(calificaciones, desviaciones, promedio);

    cout << "\nCalificaciones y sus desviaciones respecto al promedio:\n";
    for(int i = 0; i < N; i++) {
        cout << "Calificación " << calificaciones[i] << " -> Desviación: " << desviaciones[i] << endl;
    }

    double varianza = calcularVarianza(desviaciones);
    cout << "\nLa varianza de las calificaciones es: " << varianza << endl;
    return 0;
}
