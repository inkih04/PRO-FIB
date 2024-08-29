#include <iostream>
using namespace std;

int main() {
    int b, h;
    char x;
    int s = 0;
    int si = 0;

    cin >> h >> b;
    for (int i = 0; i < h; ++i) {
        for (int j = 0; j < b; ++j) {
            cin >> x;
            x = int (x) - '0';
            if (i%2 == 0) {
                s = s + x;
                si = si + x;
            }
            else s = s +x;
        }


    }
    cout << s << " " <<si << endl;






}