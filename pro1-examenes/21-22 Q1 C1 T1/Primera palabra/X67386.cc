#include <iostream>
using namespace std;

int main() {
    string x, n;
    int i = 1;
    bool hay_x = false;
    cin >> x;
    while (cin >> n and not hay_x) {
        if (n == x) {
            cout << i << endl;
            hay_x = true;
        }
        else ++i;
    }
    if (not hay_x) cout << "No existe" << endl;



}