#include <iostream>
using namespace std;


// Pre: x > 0
// Post: retorna el valor que resulta de eliminar a x sus dÃ­gitos igual a 0
int elimina_ceros(int x) {
    if (x < 10) return x;
    if(x%10 != 0) return x%10 + elimina_ceros(x/10)*10;
    return elimina_ceros(x/10);
}

int main() {
    int x;
    while (cin >> x) {
    cout << elimina_ceros(x) << endl;
    }
} 