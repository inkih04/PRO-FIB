#include <iostream>
#include <vector>

using namespace std;

//pre: vector no vacío
//post: retorna la media de los pares
double m_pares (const vector<int>& v) {
    int n = v.size();
    int cont = 0;
    double s = 0;
    for (int i = 0; i < n; ++i) {
        if (v[i]%2 == 0) {
            ++cont;
            s = s +v[i];
        } 
    }
    return s/cont; 
}
// Pre: --
// Post: retorna la posición del último elemento en v con valor inferior a x, 
//       retorna -1 si ese elemento no existe
int last_position_of(const vector<int>& v, double x) {
    int n = v.size();
    for (int i = n - 1; i >= 0; --i) {
        if (v[i] < x) return i;
    }
    return -1;
}

int main () {
    int n;
    while (cin >> n) {
        vector<int> vec(n);
        for (int i = 0; i < n; ++i) cin >> vec[i];
        double med = m_pares(vec);
       // cout << med;
        cout << last_position_of(vec, med) << endl;
    }



}