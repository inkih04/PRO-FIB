#include <iostream>
using namespace std;

int main() {
    int n, m;
    int i = 0;
    bool encontrado = false;
    bool existe = false;
    cin >> n;
    cin >> m;
    while (m != -1 and not encontrado ) {
        ++i;
        if((n + m)%10 == 0) {
            existe = true;
            encontrado = true;
            cout << m << ": " << i << endl;
        }
        else cin >> m;
    }
    if (not existe ) cout << "No existe" << endl;
}