#include <iostream>
using namespace std;

int suma_digitos(int x) {
    int s = 0;
    while (x > 0) {
        s = s + x%10;
        x = x/10;
    }
    return s;
}


int main() {
    int act, ant;
    cin >> ant;
    int cont = 0;
    while (cin >> act) {
        if (ant%suma_digitos(act) == 0) ++cont;
        ant = act;
    }
    cout << cont << endl;
}