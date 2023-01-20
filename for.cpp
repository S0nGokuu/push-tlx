#include <iostream>
using namespace std;

int main() {
    int n;
    int m;
    int b;
    cin >> n;
    b = 0;
    for(int i = 1; i <= n; i++) {
        cin >> m;
        b += m;
        
    }
    cout << b << endl;
}
