#include <iostream>
//#include <vector>
using namespace std;

const int T = 60;

int main() {
    int n;
    int aux;
    char temp;
    int s = 0;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> aux;
        s = s + aux*T*T;
        cin >> temp >> aux;
        s = s + aux*60;
        cin >> temp >> aux;
        s = s + aux;
    }
    cout << (s/T)/T <<"H " << (s/T)%T << "M " << s%T << 'S' << endl;






}