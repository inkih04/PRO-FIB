#include <iostream>
using namespace std;



int main() {
    int n;
    int tot = 0;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int m;
        int c = 0; //contaador
        cin >> m;
        int ant, act;
        cin >> ant >> act;
        for (int j = 2; j < m; ++j) {
            int post;
            cin >> post;
            if (act == (ant + post)) ++c;
            ant = act;
            act = post;
            
        }
        tot = tot + c;
        cout << c << endl;    
    }
    cout << "Total: " << tot << endl;
}