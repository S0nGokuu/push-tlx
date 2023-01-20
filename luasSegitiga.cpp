#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double t;
    double a;
    cin >> a;
    cin >> t;
    double hasil = a*t/2;
    cout << fixed << setprecision(2) << hasil;
}       