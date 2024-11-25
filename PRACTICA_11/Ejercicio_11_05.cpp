/*Materia: Programación I, Paralelo 1
Autor: Carlos Riveros Lopez.
Fecha creación: 25/11/2024
Número de ejercicio: 5
Problema planteado: Actualizar datos en un archivo
Descripción: Escribe un programa que permita actualizar un archivo de
texto llamado productos.txt, el cual contiene una lista de productos y sus
precios. Cada línea del archivo tiene el formato Producto Precio (por
ejemplo, Manzana 1.50). El programa debe permitir al usuario ingresar el
nombre de un producto y el nuevo precio, y actualizar ese precio en el
archivo. Si el producto no se encuentra, debe indicar que no existe. */

#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

bool actualizarPrecioProducto(const string& archivoNombre, const string& producto, double nuevoPrecio) {
    ifstream archivoLeer(archivoNombre);
    vector<string> lineas;
    string linea;
    bool productoEncontrado = false;

    if (archivoLeer.is_open()) {
        // Leer todas las líneas del archivo y guardarlas en un vector
        while (getline(archivoLeer, linea)) {
            stringstream ss(linea);
            string nombreProducto;
            double precio;
            ss >> nombreProducto >> precio;
    
            if (nombreProducto == producto) {
                stringstream nuevaLinea;
                nuevaLinea << producto << " " << nuevoPrecio;
                lineas.push_back(nuevaLinea.str());
                productoEncontrado = true;
            } else {
                lineas.push_back(linea);  // Si no es el producto, mantener la línea original
            }
        }
        archivoLeer.close();
        
        // Si el producto fue encontrado, sobrescribimos el archivo con las líneas actualizadas
        if (productoEncontrado) {
            ofstream archivoEscribir(archivoNombre);
            if (archivoEscribir.is_open()) {
                for (const string& nuevaLinea : lineas) {
                    archivoEscribir << nuevaLinea << endl;
                }
                archivoEscribir.close();
            } else {
                cout << "No se pudo abrir el archivo para escribir." << endl;
            }
        }
    } else {
        cout << "No se pudo abrir el archivo para leer." << endl;
    }

    return productoEncontrado;
}

int main() {
    string archivoNombre = "productos.txt";  
    string producto;
    double nuevoPrecio;
    cout << "Ingrese el nombre del producto a actualizar: ";
    getline(cin, producto);
    cout << "Ingrese el nuevo precio del producto: ";
    cin >> nuevoPrecio;

    bool resultado = actualizarPrecioProducto(archivoNombre, producto, nuevoPrecio);
    if (resultado) {
        cout << "El precio del producto '" << producto << "' ha sido actualizado correctamente." << endl;
    } else {
        cout << "El producto '" << producto << "' no se encontró en el archivo." << endl;
    }

    return 0;
}
