#include <iostream>
#include <vector>
using namespace std;


struct Book {
    string title;       // título del libro
    int nb_pag;         // número de páginas del libro
};

struct Author {
    string name;        // nombre del autor
    Book bestseller;    // libro superventas
};

typedef vector<Author> Library;

Library read_data() {
    int n;
    cin >> n;
    Library a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i].name >> a[i].bestseller.title >> a[i].bestseller.nb_pag;
    }
    return a;
}

int main() {
    Library libreria;
    libreria = read_data();
    int p;
    char c;
    int n = libreria.size();
    while (cin >> c >> p) {
        cout << "-- begin query" << endl;
        for (int i = 0; i < n; ++i) {
            if (libreria[i].bestseller.title[0] == c and libreria[i].bestseller.nb_pag > p) {
                cout << libreria[i].name << endl;
            }
        }
        cout << "-- end query" << endl;
    }
}