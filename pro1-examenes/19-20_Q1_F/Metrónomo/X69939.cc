#include <iostream>
using namespace std;

int time_lapse(int time_1, int time_2) {
   // cout << "t1: " << time_1 << " t2 " <<time_2 << endl; 
    if (time_1 > time_2) {
        //cout << "time lapse " << 60 - time_1 + time_2 << endl;
        return 60 - time_1 + time_2;
    }
    else if (time_1 < time_2) {
       // cout << "time lapse " << time_2 - time_1 << endl;
        return time_2 - time_1;
    }
    else {
       // cout << "time lapse " << 60 << endl;
        return 60;
    }
}




int main() {
    int time_1, time_2;
    cin >> time_1 >> time_2;
    int metronomo = time_lapse(time_1, time_2);
   // cout << "metronomo " << metronomo << endl;
    time_1 = time_2;
    bool continuar = true;
    while ( time_1 > -1 and continuar) {
        cin >> time_2;
        if (time_2 > -1 and metronomo != time_lapse(time_1, time_2)) {
            continuar = false;
            metronomo = 0;
        }
        time_1 = time_2;
    }
    cout << metronomo << endl;
}