// Materia: Programación I, Paralelo 1
// Autor: Carlos Riveros Lopez.
// Fecha creación: 16/10/2024
// Número de ejercicio: 16
// Problema planteado:Escribe un programa que valide si una expresión matemática tiene los paréntesis balanceados correctamente. La expresión puede contener los siguientes tipos de paréntesis: (), {}, [].

#include <iostream>
#include <stack>
#include <string>

using namespace std;

bool SonParentesisBalanceados(const string& expresion);

int main() {
    string expresion;
    cout << "Ingrese una expresión matemática: ";
    getline(cin, expresion);

    if (SonParentesisBalanceados(expresion)) {
        cout << "Los paréntesis están balanceados." << endl;
    } else {
        cout << "Los paréntesis no están balanceados." << endl;
    }

    return 0;
}

//Funcion para los parentecis
bool SonParentesisBalanceados(const string& expresion) {
    stack<char> pila; 
    for (char c : expresion) {
        if (c == '(' || c == '{' || c == '[') {
            pila.push(c);
        }
        // Si es un paréntesis cerrado
        else if (c == ')' || c == '}' || c == ']') {
            // Verificamos si la pila está vacía o si el paréntesis no corresponde
            if (pila.empty()) {
                return false;
            }
            char top = pila.top();
            pila.pop();
            if ((c == ')' && top != '(') || 
                (c == '}' && top != '{') || 
                (c == ']' && top != '[')) {
                return false;
            }
        }
    }
    return pila.empty();
}
