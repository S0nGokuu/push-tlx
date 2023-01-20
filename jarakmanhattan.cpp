#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int x1, y1, x2, y2;
    cin >> x1;
    cin >> y1;
    cin >> x2;
    cin >> y2;
    int x3 = x1 - x2;
    int y3 = y1 - y2;
    cout << abs(x3) + abs(y3);
}