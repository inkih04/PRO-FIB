#include <iostream>
using namespace std;


bool is_ptg(int a, int b) {
    int z  = a*a + b*b;
    int i  = 1; 
    while (i*i < z) ++i;
    return i*i == z;
}

int main() {
    int act;
    int ant;
    int pos = 1;
    bool trobat = false;
    cin >> ant;
    while (not trobat and cin >> act) {
        if (is_ptg(act, ant)) trobat = true;
       else { 
            ant = act;
            ++pos;
       }    
    } 
    if (not trobat) cout << "No pythagorean pairs" << endl;
    else cout << "First pythagorean pair " << ant << ' ' << act <<" at position " << pos << endl; 

}