#include <iostream>
#include <vector> 
using namespace std;


int main() {
    int n; //numero de partidos
    cin >> n;
    string t;
    vector<int> vec(n);// anotaciones por partido
    int max = 0; //maximo de anotaciones consolidades
    string tmax = ""; // equipo que mas anotaciones consolidades tiene
    while (cin >> t) {
        int k = 0;
        for (int i = 0; i < n; ++i) cin >> vec[i]; //cargar vector
        for (int i = 2; i < n; ++i) { //cuenta las anotaciones consolidades
            if (vec[i - 2] < vec[i] and vec[i - 1] < vec[i]) ++k;
        }
        cout << t << ": " << k << endl;
        if (k > max or (k == max and t < tmax)) {
            max = k;
            tmax = t;
        }
    }
    cout << "----------" << endl;
    if (tmax == "") cout << "no hay equipos" << endl;
    else cout << tmax << ": " << max << endl;
}