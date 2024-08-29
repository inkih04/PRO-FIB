#include <iostream>
using namespace std;


int main() {
    cout.setf(ios::fixed);
    cout.precision(1);

    int n;
    char x;
    const double celsius = 1.8;
    cin >> n;
    while (cin >> x and n >0) {
        double t;
        cin >> t;
        if (x == 'C') {
            cout << "F " << celsius*t +32 << endl;

        }
        else {
            cout << "C " << (t - 32)/celsius << endl;

        }

        --n;
    }
}