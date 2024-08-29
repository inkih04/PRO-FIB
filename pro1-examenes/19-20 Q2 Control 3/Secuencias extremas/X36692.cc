#include <iostream>
#include <vector>
using namespace std;

void get_position(const vector<int>& v, int& i, int& j, bool& extremo) {
    int n = v.size();
    i = 0;
    j = n - 1;
    int sj = v[j];
    int si = v[i];
    extremo = false;
    while (i <= j and not extremo) {
        if (sj == si) extremo = true;
        else if (sj > si) {
            ++i;
            si = si + v[i];
        }
        else if (si > sj) {
            --j;
            sj = sj + v[j];
        }
    }
}

int main () {
    int n;
    while (cin >> n) {
        vector<int> v(n);
        for (int i = 0; i < n; ++i) cin >> v[i];
        int i, j;
        bool extremo = true;
        get_position(v, i, j, extremo);
        if (extremo) cout << i << ' ' << j << endl;
        else cout << "no" << endl;
    }
}