#include <iostream>
using namespace std;




// Pre: c es una letra minuscula
// Post: retorna true si c es una vocal, false en caso contrario
bool es_vocal(char c) {
    return c == 'a' or c == 'e' or c == 'i' or c == 'o' or c == 'u'; 
}

// Pre: en la entrada hay una secuencia de letras minusculas
// Post: escribe las consonantes en el mismo orden en que
//       aparecen en la entrada seguidas de las vocales
//       en orden inverso a como aparecen en la entrada
void consonantes_vocales() {
    char c;
    if (cin >> c) {
        bool vocal = es_vocal(c);
        if (not vocal) cout << c;
        consonantes_vocales( );
        if (vocal) cout << c;
    }

}

int main() {
    consonantes_vocales();
    cout << endl;
}