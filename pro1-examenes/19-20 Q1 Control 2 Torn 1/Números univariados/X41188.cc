#include <iostream>
using namespace std;

bool is_univariate(int n) {
    int x = n%10;
    while (n != 0) {
        if (n%10 != x) return false;
        n = n/10;
    }
    return true;
}


int main() {
    int n;
    int pos = 1;
    bool encontrat = false;
    while (not encontrat and cin >> n and n >= 0) {
        if (is_univariate(n)) encontrat = true;
        else ++pos;
    }
    if (encontrat) cout << pos << endl;
    else cout << '0' << endl;
}