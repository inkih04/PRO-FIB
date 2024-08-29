   
#include <iostream>
using namespace std;

int main() {
    int n;
    bool primer = true;
    cin >> n;

    for (int i = 0; i < n; ++i) {
        int k = 0;
        if (primer) {
            for (int j = 0; j < n; ++j ) cout << "*";
            primer = false;
        }
        else {
            for (int j = 0; j < i; ++j) {
                cout << " ";
                ++k;
            }
            for (int j = k; k == i; ++j) {
                cout << "*";
                ++k;
            }
            for (int j = k; j < n-1; ++j) {
                cout << " ";
                ++k;
            }
            if (i+1 != n)cout << "*";
        }
        cout << endl;

    }
}
//*****
// *  *
//  * *
//   **
//    *