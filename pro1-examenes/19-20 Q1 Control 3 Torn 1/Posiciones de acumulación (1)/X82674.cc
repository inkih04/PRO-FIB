   
#include <iostream>
#include <vector>
using namespace std;

//pre:
//post:
bool suma (const vector<int>& v, int n) {
    int suma = 0;
    int i = n -1;
    while (i >= 0 and suma < v[n]) {
        suma = suma + v[i];
        --i;
    }
    return suma == v[n];
}

int main () {
    int n;
    while (cin >> n) {
        vector<int> v(n);
        for (int i = 0; i < n; ++i) cin >> v[i];
        int cont = 0;
        if (v[0] == 0) ++cont;
        for (int i = 1; i < n; ++i) {
            if (suma(v, i)) ++cont;
        }
        cout << cont << endl;
    }
}