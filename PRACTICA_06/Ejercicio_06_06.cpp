// Materia: Programación I, Paralelo 1
// Autor: Carlos Riveros Lopez.
// Fecha creación: 04/10/2024
// Número de ejercicio: 5
// Problema planteado: Traspones una matriz de N x M

#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> ingresar (int, int);
vector<vector<int>> transpuesta (vector<vector<int>>, int, int);
void imprimir (vector<vector<int>>);

int main (){
    int n, m;
    vector<vector<int>> mat;
    cout << "Ingrese los valores de n y m" << endl;
    cin >> n >> m;
    mat = ingresar(n,m);
    cout << "La matriz es: " << endl;
    imprimir(mat);
    vector<vector<int>> t;
    t = transpuesta(mat, n, m);
    cout << "La transpuesta es: " << endl;
    imprimir(t);
}

//Funcion donde se crea la matriz
vector<vector<int>> ingresar (int n, int m){
    vector<vector<int>> mat;
    for(int i = 0; i < n; i++){
        vector<int> fila;
        for(int j = 0; j < m; j++){
            int a;
            cin >> a;
            fila.push_back(a);
        }
        mat.push_back(fila);
    }
    return mat;
}

//Funcion la cual se hace la transpuesta
vector<vector<int>> transpuesta (vector<vector<int>> mat, int n, int m){
    vector<vector<int>> t;
    for(int i = 0; i < m; i++){
        vector<int> fila;
        for(int j = 0; j < n; j++){
            fila.push_back(mat[j][i]);
        }
        t.push_back(fila);
    }
    return t;
}

void imprimir (vector<vector<int>> mat){
    for(int i = 0; i < mat.size(); i++){
        for(int j = 0; j < mat[i].size(); j++){
            cout << mat[i][j] << "\t";
        }
        cout << endl;
    }
}