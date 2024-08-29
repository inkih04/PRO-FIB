#include <iostream>
using namespace std;

int main() {
    int n;

    cin >> n;
    int max = 2*n -1;
    for (int i = 0; i < n; ++i) {
        int k = 0;
        for (int j = 0; j < i; ++j) {
            cout << ' ';
            ++k;
        }
        cout << 'V';
        ++k;
        for (int j = k; j < (max -1 - i); ++j) cout << ' ';
        if (n != (i + 1)) cout << 'V';
        cout << endl;
    }
}