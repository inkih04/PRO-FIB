#include <iostream>
#include <vector>
using namespace std;

typedef vector<int> Casilla;
typedef vector<Casilla> Matriz;

bool is_hankel(const Matriz& mat) {
    int f = mat.size();
    int c = mat[0].size();

    for (int i = 1; i < f; ++i) {
        int anterior = mat[i][0];
        int j = i-1;
        int l = 1;
        while (j >= 0 and l < c) {
            if (anterior != mat[j][l]) return false;
            --j;
            ++l;
        }
    }

    for (int i = 1; i < c-1; ++i) {
        int anterior = mat[f-1][i];
        int j = f-2;
        int l = i+1;
        while (l < c) {
            if (anterior != mat[j][l]) return false;
            --j;
            ++l;
        }
    }

    return true;  
}

void leer_matriz (Matriz& mat) {
    int n = mat.size();
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) cin >> mat[i][j];
    }
}

int main () {
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int k;
        cin >> k;
        Matriz mat(k, Casilla(k));
        leer_matriz(mat);
        if (is_hankel(mat)) cout << "yes" << endl;
        else cout << "no" << endl;
    }
}