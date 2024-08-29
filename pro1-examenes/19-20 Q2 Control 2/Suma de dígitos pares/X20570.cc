   
#include <iostream>
using namespace std;


// Pre: n >= 0
// Post: retorna la suma de los dÃ­gitos pares de n
int suma_pares(int n) {
   if (n == 0) return 0;
   else {
    if ((n%10)%2 == 0) return suma_pares(n/10) + (n%10);
    else return suma_pares(n/10); 
   }

}



int main() {
    int x;
    while (cin >> x) cout << suma_pares(x) << endl;
}