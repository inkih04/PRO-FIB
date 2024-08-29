#include <iostream>
using namespace std;

int main() {
    char x;
    int i = 0;
    while (cin >> x) {
        if (x >= 'a' and x <= 'z') {
            bool character = true;
            bool primer = true;
            bool valido = true;
            while ( character) {
                if (not primer) cin >> x;
                if (x == 'a') valido = false;
                else if (x > 'a' and x <= 'z' and x != '$');
                else {
                    character = false;
                    if (x == '$') {
                        if (valido) ++i;
                        cout << i <<endl;
                        i=0;
                    }
                    else if (valido) ++i;
                }

        primer = false;
        }
        character = true;
        }
    else if (x == '$'){
        cout << i <<endl;
        i=0;
    }

    }
}