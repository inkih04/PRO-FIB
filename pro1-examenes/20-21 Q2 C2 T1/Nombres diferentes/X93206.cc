#include <iostream>
#include <vector>

using namespace std;
bool esta(string w, const vector<string>& v2) {
    for (int i = 0; i < v2.size(); ++i) {
        if (w == v2[i]) return true;
    }
    return false; 


}

int main () {
    int n;
    while (cin >> n) {
        vector <string> vec(n);
        vector <string> v2(n, " ");
        for (int i = 0; i < n; ++i) cin >> vec[i];
        cout << vec[0] << endl;
        v2[0] = vec[0];
        int j = 1;
        for (int i = 1; i < n; ++i) {
            if (not esta(vec[i], v2)) {
                cout << vec[i] << endl;
                v2[j] = vec[i];
                ++j;
            }
        }
        cout << endl;
    }
}