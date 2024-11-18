/* Materia: Programación I, Paralelo 1
Autor: Carlos Riveros Lopez.
Fecha creación: 12/11/2024
Número de ejercicio: 6
Problema planteado: Gestión de empleados con funciones
Descripción: Define una estructura llamada Empleado que contenga los siguientes campos:
    nombre (cadena de caracteres)
    id (entero)
    sueldo (decimal)
    antiguedad (entero, en años)
Escribe un programa que permita:
    Ingresar los datos de N empleados.
    Crear una función que reciba un arreglo de empleados y un valor de sueldo y devuelva cuántos empleados tienen un sueldo mayor a ese valor.
    Crear otra función que reciba el arreglo y calcule el promedio de antigüedad de todos los empleados.         */

#include <iostream>
#include <string>
using namespace std;

struct Empleado {
    string nombre;
    int id;
    double sueldo;
    int antiguedad;  
};

// Función para registrar los datos de un empleado
void registrarEmpleado(Empleado &empleado) {
    cout << "Ingrese el nombre del empleado: ";
    getline(cin, empleado.nombre);

    cout << "Ingrese el ID del empleado: ";
    cin >> empleado.id;

    cout << "Ingrese el sueldo del empleado: ";
    cin >> empleado.sueldo;

    cout << "Ingrese la antigüedad del empleado (en años): ";
    cin >> empleado.antiguedad;

    cin.ignore();  
}

int contarEmpleadosConSueldoMayorA(Empleado empleados[], int n, double sueldoLimite) {
    int contador = 0;
    for (int i = 0; i < n; ++i) {
        if (empleados[i].sueldo > sueldoLimite) {
            contador++;
        }
    }
    return contador;
}

double calcularPromedioAntiguedad(Empleado empleados[], int n) {
    int sumaAntiguedad = 0;
    for (int i = 0; i < n; ++i) {
        sumaAntiguedad += empleados[i].antiguedad;
    }
    return (n > 0) ? static_cast<double>(sumaAntiguedad) / n : 0.0;
}

// Función para mostrar los datos de un empleado
void mostrarEmpleado(const Empleado &empleado) {
    cout << "\nNombre: " << empleado.nombre << endl;
    cout << "ID: " << empleado.id << endl;
    cout << "Sueldo: " << empleado.sueldo << endl;
    cout << "Antigüedad: " << empleado.antiguedad << " años" << endl;
}

int main() {
    int N;
    cout << "Ingrese el número de empleados: ";
    cin >> N;
    cin.ignore(); 
    
    Empleado empleados[N];

    for (int i = 0; i < N; ++i) {
        cout << "\nRegistro del empleado " << i + 1 << ":\n";
        registrarEmpleado(empleados[i]);
    }

    double sueldoLimite;
    cout << "\nIngrese el sueldo límite para contar empleados con sueldo mayor: ";
    cin >> sueldoLimite;

    int cantidadEmpleadosConSueldoMayor = contarEmpleadosConSueldoMayorA(empleados, N, sueldoLimite);
    cout << "\nCantidad de empleados con sueldo mayor a " << sueldoLimite << ": " << cantidadEmpleadosConSueldoMayor << endl;

    double promedioAntiguedad = calcularPromedioAntiguedad(empleados, N);
    cout << "\nPromedio de antigüedad de los empleados: " << promedioAntiguedad << " años" << endl;

    cout << "\nDatos de los empleados registrados:\n";
    for (int i = 0; i < N; ++i) {
        mostrarEmpleado(empleados[i]);
    }

    return 0;
}
