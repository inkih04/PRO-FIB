#include <iostream>
using namespace std;


int main() {
    int a;
    while (cin >> a and a >= 0) {
        int b;
        char op;
        cin >> op >> b;
        if(op == '+') cout << a + b << endl;
        else if(op == '*') cout << a*b << endl;
        else cout << a - b << endl;
    }
}