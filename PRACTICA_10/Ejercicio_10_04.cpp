/* Materia: Programación I, Paralelo 1
Autor: Carlos Riveros Lopez.
Fecha creación: 12/11/2024
Número de ejercicio: 4
Problema planteado: Personal de la UCB
Descripción: Se tiene una lista de empleados de la UCB y esta se almacena en una variable tipo struct llamada “empleado”. La información con la que se cuenta es:
    nombre (cadena de caracteres)
    genero (cadena de caracteres)
    salario (decimal) 
Realizar un programa en C++ que lea un array de estructuras los datos de los N trabajadores de la empresa e imprima los datos de los empleados con menor y mayor salario.      */

#include <iostream>
#include <string>
#include <limits>
using namespace std;


struct Empleado {
    string nombre;
    string genero;
    double salario;  
};

void registrarEmpleado(Empleado &empleado) {
    cout << "Ingrese el nombre del empleado: ";
    getline(cin, empleado.nombre);

    cout << "Ingrese el genero del empleado (Masculino/Femenino): ";
    getline(cin, empleado.genero);

    cout << "Ingrese el salario del empleado: ";
    cin >> empleado.salario;

    cin.ignore();  
}

void mostrarEmpleado(const Empleado &empleado) {
    cout << "Nombre: " << empleado.nombre << endl;
    cout << "Genero: " << empleado.genero << endl;
    cout << "Salario: " << empleado.salario << endl;
}

// Función para encontrar el empleado con el menor salario
Empleado obtenerEmpleadoMenorSalario(Empleado empleados[], int n) {
    Empleado menor = empleados[0];  
    for (int i = 1; i < n; ++i) {
        if (empleados[i].salario < menor.salario) {
            menor = empleados[i];
        }
    }
    return menor;
}

// Función para encontrar el empleado con el mayor salario
Empleado obtenerEmpleadoMayorSalario(Empleado empleados[], int n) {
    Empleado mayor = empleados[0];  
    for (int i = 1; i < n; ++i) {
        if (empleados[i].salario > mayor.salario) {
            mayor = empleados[i];
        }
    }
    return mayor;
}

int main() {
    int N;

    cout << "Ingrese el numero de empleados: ";
    cin >> N;
    cin.ignore();

    Empleado empleados[N];

    for (int i = 0; i < N; ++i) {
        cout << "\nRegistro del empleado " << i + 1 << ":\n";
        registrarEmpleado(empleados[i]);
    }

    Empleado menorSalario = obtenerEmpleadoMenorSalario(empleados, N);
    Empleado mayorSalario = obtenerEmpleadoMayorSalario(empleados, N);

    cout << "\nEmpleado con el menor salario:\n";
    mostrarEmpleado(menorSalario);
    cout << "\nEmpleado con el mayor salario:\n";
    mostrarEmpleado(mayorSalario);

    return 0;
}
