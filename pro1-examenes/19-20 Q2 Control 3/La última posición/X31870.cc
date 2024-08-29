#include <iostream>
#include <vector>
using namespace std;


///////////////////////////////////////////
//
// documentation and code of effi_last_pos 
// function must be here
//
///////////////////////////////////////////
int effi_last_pos(const vector<int>& v, int z) {
    int esq = 0;
    int de = v.size() - 1;
    while (esq + 1 != de) {
     int mid = (esq + de)/2;
     if (v[mid] <= z)  esq = mid;
     else de = mid;
    }
    return esq;
}


//gets vector v from input chanel
void read_vector(vector<int>& v) {
    int n = v.size();
    for (int i = 0; i < n; ++i) cin >> v[i];
}


int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    read_vector(v);
    int z;
    while (cin >> z)
        cout << effi_last_pos(v, z) << endl;
}