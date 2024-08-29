#include <iostream>
#include <vector>
using namespace std;

typedef vector<int> Casillas;
typedef vector<Casillas> Matriz;

void get_Matriz(Matriz& matrix, int f, int casilla) {
    matrix = Matriz(f, Casillas(casilla));
    for (int i = 0; i < f; ++i) {
        for (int j = 0; j < casilla; ++j) cin >> matrix[i][j];
    }
}

int limpieza(const Matriz& matrix, int c, int s) {
    int f = matrix.size();
    int suma = 0; 
    if (c%2 == 0) {
        for (int i = 0; i < f; ++i) {
            if (matrix[i][c] == 0) cout << i << ' ' << c << endl;
            else suma = suma + matrix[i][c];
        }
    }
    else {
        for (int i = f - 1; i >= 0; --i) {
            if (matrix[i][c] == 0) cout << i << ' ' << c << endl;
            else suma = suma + matrix[i][c];
        }
    }    
    return suma + s;
}


int main () {
    int f, casilla;
    cin >> f >> casilla;
    Matriz matrix;
    get_Matriz(matrix, f, casilla);
    int s = 0;
    for (int i = 0; i < casilla; ++i) {
        s = limpieza(matrix, i, s);
        cout << "Total en columna " << i << ": " << s << endl; 
    }
}