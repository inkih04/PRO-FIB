   
#include <iostream>
using namespace std;

int main() {
    int m;
    cin >> m;
    for (int i = 0; i < m; ++i) {
        int posmax = 0;
        int pos_guardada = 1;
        int cont = 0;
        int valor = 1;
        int cont_max = 0;
        int n;
        bool acabar = false;
        int pos = 1;
        while (not acabar and cin >> n) {
            if ((valor != n) or (n == -1)) {
                valor = n;
                if ( cont > cont_max) {
                    cont_max = cont;
                    posmax = pos_guardada;
                }
                if (n == -1) acabar = true;
                cont = 0;
                pos_guardada = pos;
            }
            ++cont;
            ++pos;
        }
        cout << posmax << ' ' << cont_max << endl;
    }
}