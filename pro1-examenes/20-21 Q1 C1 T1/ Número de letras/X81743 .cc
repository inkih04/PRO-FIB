#include <iostream>
using namespace std;

int main() {
   int n;
   int j = 0;
   int i = 0;
   char x, mi, mx;
   cin >> n >> mi >> mx;
   while (cin >> x and j < n) {
       ++j;
       if (x >= mi and x <= mx) ++i;
    }
    cout << i << endl;
}