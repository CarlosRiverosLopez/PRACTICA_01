/* Materia: Programación I, Paralelo 1
Autor: Carlos Riveros Lopez.
Fecha creación: 12/11/2024
Número de ejercicio: 1
Problema planteado: Registro de una biblioteca
Descripción: Define una estructura llamada Libro con los siguientes campos:
    titulo (cadena de caracteres)
    autor (cadena de caracteres)
    año_publicacion (entero)
    disponible (booleano, que indica si el libro está disponible o no)
Escribe un programa que permita al usuario registrar los datos de 1 libros, y luego muestre los datos del libro, indicando si está o no disponible. */

#include <iostream>
#include <string>
using namespace std;


struct Libro {
    string titulo;
    string autor;
    int anio_publicacion;
    bool disponible;
};

// Función para registrar los datos del libro
void registrarLibro(Libro &libro) {
    cout << "Ingrese el titulo del libro: ";
    getline(cin, libro.titulo);

    cout << "Ingrese el autor del libro: ";
    getline(cin, libro.autor);

    cout << "Ingrese el año de publicación del libro: ";
    cin >> libro.anio_publicacion;

    cout << "¿Está disponible el libro? (1 para sí, 0 para no): ";
    cin >> libro.disponible;

    cin.ignore();
}

// Función para mostrar los datos del libro
void mostrarLibro(const Libro &libro) {
    cout << "\nDatos del libro:\n";
    cout << "Titulo: " << libro.titulo << endl;
    cout << "Autor: " << libro.autor << endl;
    cout << "Año de publicación: " << libro.anio_publicacion << endl;
    cout << "Estado de disponibilidad: " << (libro.disponible ? "Disponible" : "No disponible") << endl;
}

int main() {
    Libro libro;
    registrarLibro(libro);
    mostrarLibro(libro);

    return 0;
}



