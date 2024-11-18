/* Materia: Programación I, Paralelo 1
Autor: Carlos Riveros Lopez.
Fecha creación: 12/11/2024
Número de ejercicio: 7
Problema planteado: Inventario de productos en una tienda
Descripción: Define una estructura llamada Producto con los siguientes campos:
    nombre (cadena de caracteres)
    codigo (cadena de caracteres)
    precio (decimal)
    cantidad_en_inventario (entero)
    observaciones (cadena de caracteres)
Luego, escribe un programa que permita:
    Registrar N productos en el inventario.
    Mostrar el producto más caro en el inventario.
    Mostrar la cantidad total de productos en inventario.
    Si un producto se encuentra con cantidad_en_inventario menor a 5, en el campo observaciones debe tener un mensaje de advertencia “PRUDUCTO CON BAJA CANTIDAD DE INVENTARIO”.    */

#include <iostream>
#include <string>
#include <limits>
using namespace std;

struct Producto {
    string nombre;
    string codigo;
    double precio;
    int cantidad_en_inventario;
    string observaciones;
};

// Función para registrar los datos de un producto
void registrarProducto(Producto &producto) {
    cout << "Ingrese el nombre del producto: ";
    getline(cin, producto.nombre);

    cout << "Ingrese el código del producto: ";
    getline(cin, producto.codigo);

    cout << "Ingrese el precio del producto: ";
    cin >> producto.precio;

    cout << "Ingrese la cantidad en inventario: ";
    cin >> producto.cantidad_en_inventario;
    cin.ignore(); 

    if (producto.cantidad_en_inventario < 5) {
        producto.observaciones = "PRODUCTO CON BAJA CANTIDAD DE INVENTARIO";
    } else {
        producto.observaciones = "";
    }
}

void mostrarProducto(const Producto &producto) {
    cout << "\nNombre: " << producto.nombre << endl;
    cout << "Código: " << producto.codigo << endl;
    cout << "Precio: " << producto.precio << endl;
    cout << "Cantidad en inventario: " << producto.cantidad_en_inventario << endl;
    cout << "Observaciones: " << producto.observaciones << endl;
}

// Función para encontrar el producto más caro
Producto obtenerProductoMasCaro(Producto productos[], int n) {
    Producto masCaro = productos[0];  // Inicializamos con el primer producto
    for (int i = 1; i < n; ++i) {
        if (productos[i].precio > masCaro.precio) {
            masCaro = productos[i];
        }
    }
    return masCaro;
}

int calcularCantidadTotalEnInventario(Producto productos[], int n) {
    int total = 0;
    for (int i = 0; i < n; ++i) {
        total += productos[i].cantidad_en_inventario;
    }
    return total;
}

int main() {
    int N;
    cout << "Ingrese el número de productos a registrar: ";
    cin >> N;
    cin.ignore();

    Producto productos[N];

    for (int i = 0; i < N; ++i) {
        cout << "\nRegistro del producto " << i + 1 << ":\n";
        registrarProducto(productos[i]);
    }

    Producto productoMasCaro = obtenerProductoMasCaro(productos, N);
    cout << "\nProducto más caro en inventario:\n";
    mostrarProducto(productoMasCaro);
    int cantidadTotal = calcularCantidadTotalEnInventario(productos, N);
    cout << "\nCantidad total de productos en inventario: " << cantidadTotal << endl;

    cout << "\nDatos de todos los productos registrados:\n";
    for (int i = 0; i < N; ++i) {
        mostrarProducto(productos[i]);
    }

    return 0;
}
