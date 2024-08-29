#include <iostream>
#include <vector>

using namespace std;

// Pre: dos palabras minúsculas; un entero no negativo d
// Post: retorna true si las dos palabras son d-compatibles, false en caso contrario
bool d_compatibles(int d, string v, string w) {
    int n = v.size();
    if (n != w.size()) return false;
    int f = 0;
    for (int i = 0; i < n; ++i) {
        if (v[i] != w[i]) ++f;
        if (f > d) return false;
    }
    return true;
}

// Pre: un vector v de palabras en minúsculas; una palabra minúscula w; un entero no negativo d
// Post: retorna la primera palabra en v d-compatible con w; "--" en caso contrario
string palabra_compatible(const vector<string>& v, string w, int d) {
    int n = v.size();
    for (int i = 0; i < n; ++i) {
        if (d_compatibles(d, v[i], w)) return v[i];
    }
    return "--";
}


int main() {
    int d;
    int n;
    string w;
    cin >> d >> n;
    vector<string> vec (n);
    for (int i = 0; i < n; ++i) cin >> vec[i];
    while (cin >> w and  w != "STOP") {
        cout << w <<": " << palabra_compatible(vec, w, d) << endl;   
    } 
}