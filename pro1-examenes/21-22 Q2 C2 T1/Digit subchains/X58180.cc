#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool is_subchain(int a, int b) {
    if (a == 0) return true;
    if (b == 0) return false;
    if (a%10 == b%10) return is_subchain(a/10,b/10);
    else {
        return is_subchain(a,b/10);
    }
}

int main () {
int a, b;
while (cin >> a >> b) {
    if(is_subchain(a,b)) cout << "yes" << endl;
    else cout << "no" << endl;
    }
}