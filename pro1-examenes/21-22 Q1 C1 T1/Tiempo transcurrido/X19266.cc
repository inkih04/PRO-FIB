#include <iostream>
using namespace std;


int main() {
    int hi, mi, hf, mf, h, m;
    int s = 0; // sumatorio de minutos
    int z = 0; //sumatorio de minutos para el caso en que se pasen de la hora 00:00;0000
    cin >> hi >> mi >> hf >> mf;
    s =  hf*60 + mf - (60*hi + mi);
    if (s < 0) {
        z = hf*60 + mf + (1440 - (60*hi + mi));
        h = z/60;
        m = z%60;
    }
    else {
        h = s/60;
        m = s%60;
    }
    cout << h/10 << h%10 << ":" << m/10 << m%10 << endl;

}