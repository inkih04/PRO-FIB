#include <iostream>
using namespace std;

int main() {
    cout.setf(ios::fixed);
    cout.precision(2);
    string x;
    double b, h, c;
    bool acabar = false;
    while (not acabar and cin >> x) {
        if (x == "perimetro") {
            cin >> b >> h >> c;
            cout << b + h + c << endl;

        }
        else if (x == "area") {
            cin >> b >> h;
            cout << b*h/2 << endl;

        }
        else acabar = true;

    }
}