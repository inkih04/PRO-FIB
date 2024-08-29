#include <iostream>
#include <vector>
using namespace std;

typedef vector<int> Fila;
typedef vector<Fila> Matriz;

// Pre: mat tiene dimensiones f*c mayores que 0; en la entrada hay una matriz de enteros de dimensiones f*c
// Post: mat contiene la matriz que habÃ­a en la entrada
void read_matriz(Matriz& mat) {
    int f = mat.size();
    int c = mat[0].size();
    for (int i = 0; i < f; ++i) {
        for (int j = 0; j < c; ++j) cin >> mat[i][j];
    }
}
//pre: mat > 0; unos puntos i j dentro de la matriz; condicional para diferenciar las funciones
//post: devuelve el valor de la suma de un submatriz si condicional == true --> la submatriz inferior izquierda
//      determinada por las posiciones (i, 0) y (f - 1, j), en otro caso retorna la submatriz
//      superior derecha determinada por las posiciones (0, j) e (i, c - 1)
int suma_mat(const Matriz& mat, int i , int j, bool condicional) {
    int s = 0;
    int f = mat.size();
    int c = mat[0].size();
    if (not condicional) {
        for (int p = 0; p <= i; ++p) {
            for (int z = j; z <= c -1; ++z) s = s + mat[p][z];
        }
        return s;
    }
    for (int p = i; p <= f - 1; ++p) {
        for (int z = 0; z <= j; ++z) s = s + mat[p][z];
    }
    return s;
}


int main () {
    int f, c;
    cin >> f >> c;
    Matriz mat(f, Fila(c));
    read_matriz(mat);
    int i, j;
    while (cin >> i >> j) {
        int s1 = suma_mat(mat, i, j, false);
        int s2 = suma_mat(mat, i, j, true);
        if (s1 == s2) cout << "si: " << s1 << endl;
        else cout << "no: " << s1 << ", " << s2 << endl;
    }

}