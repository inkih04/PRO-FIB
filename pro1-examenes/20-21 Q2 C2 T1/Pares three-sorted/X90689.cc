#include <iostream>
using namespace std;


// Pre: a > 0 and b > 0
// Post: returns true when  pair (a, b) is three-sorted
//      returns false otherwise
bool is_three_sorted(int a, int b) {
    if (a%3 == 0 and b%3 == 0) return is_three_sorted(a/3, b/3);
    if (b%3 == 0) return false;
    return true;
}

int main () {
    int a, b;
    while (cin >> a >> b) {
        if (is_three_sorted(a, b)) cout << "yes" << endl;
        else cout << "no" << endl;

    }


}