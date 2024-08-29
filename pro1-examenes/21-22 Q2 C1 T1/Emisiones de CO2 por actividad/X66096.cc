#include <iostream>
using namespace std;


int main() {
    cout.setf(ios::fixed);
    cout.precision(2);
    int any;
    double co2;
    string t;

    cin >> any >> co2 >> t;
    const double mt = 31.0/100;
    const double pi = 27.0/100;
    const double gt = 19.0/100;
    const double ga = 16.0/100;
    const double kwc = 7.0/100;
    if (t == "making_things") cout << "Making things produced " << co2*mt << " CO2 Gt in " << any << endl;
    else if (t == "pluggin_in") cout << "Pluggin in produced " << co2*pi << " CO2 Gt in " << any << endl;
    else if (t == "growing_things") cout << "Growing things produced " << co2*gt << " CO2 Gt in " << any << endl;
    else if (t == "getting_around") cout << "Getting around produced " << co2*ga << " CO2 Gt in " << any << endl;
    else cout << "Keeping warm and cold produced " << co2*kwc << " CO2 Gt in " << any << endl;




}