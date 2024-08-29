#include <iostream>
#include <vector>
using namespace std;


// Pre: p, pref están formadas por letras minúsculas
// Post: retorna true si pref es un prefijo de p, false en caso contrario
bool prefijo(const string& p, const string& pref) {
    int n = pref.size();
    for (int i = 0; i < n; ++i) {
        if (p[i] != pref[i]) return false;
    }
    return true;
}

int main() {
    int n;
    int i = 1;
    while (cin >> n) {
        string palabra;
        cin >> palabra;
        int cont = 1; 
        for (int j = 0; j < n -1; ++j) {
            string pref;
            cin >> pref;
            if (prefijo(palabra, pref)) {
               // cout << "pref : " << pref << endl;
                ++cont;
            }
        }
        cout << "Linea " << i << ": " << cont << " - " << palabra << endl;
        ++i;
    }
}