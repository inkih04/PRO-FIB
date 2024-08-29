#include <iostream>
using namespace std;

const int S = 60;

//pre: time1 = ant & time2 = act
//post:
int time_lapse(int time_1, int time_2) {
    if (time_1 >= time_2) return S - time_1 + time_2;
    return time_2 - time_1;
}


int main() {
    int k;
    cin >> k;
    int act;
    int ant;
    bool acabar = false;
    int t = 0;
    int pos = 2;
    cin >> ant;
    while (not acabar and cin >> act and act != -1 ) {
        t = t + time_lapse(ant, act);
        if (t > k) {
            acabar = true;
            cout << pos << endl; 
        }
        else ant = act;
        ++pos;
    }
    if (not acabar) cout << '0' << endl;
}