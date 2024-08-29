#include <iostream>
using namespace std;


int main() {
    int x;
    bool f= false;
    int count = 0;
    cin >> x;
    while (not f) {
        if (x == -1) f = true;
        else{
            int c = x;  //copia de x1;
            int r = x;  //copia que se encarga del residuo;
            for (int i = 0; c > 0; ++i) {
                r = c%10;
                c = c/10;
            }
            if (x%10 == r or x < 9) {
            ++count;
            cout << x << endl;
            }
            cin >> x;
        }
    }
    cout << "total: " << count << endl;
}