#include <iostream>
#include <vector>
using namespace std;

//pre: presu.size() > 0 
//
//post: true --> si la palabra contiene el prefijo y el sufijo
bool pattern_match(string presu, string w) {
    int l = presu.size() -1;
    int n_w = w.size();
    if (n_w < l) return false;
    int j = 0;
    int n_pre = 0;
    int n_su;
    while (presu[j] != '*') {
        ++n_pre;
        ++j;
    }
    n_su = presu.size() - n_pre -1;
    for (int i = 0; i < n_pre; ++i) {
        if (w[i] != presu[i]) return false;
    }
    for (int i = 0; i < n_su; ++i) {
        if (w[n_w - n_su +i] != presu[n_pre + 1 +i]) return false;
    } 
    return true;
}

int main() {
    string presu;
    while(cin >> presu) {
        int n; // numero de palabras a tratar
        cin >> n;
        cout << presu << ':'<<  endl;
        for (int j = 0; j < n; ++j) {
            string w;
            cin >> w;
            if (pattern_match(presu, w)) cout << "    " << w <<endl;
        }
    }
}