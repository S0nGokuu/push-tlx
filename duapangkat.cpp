#include <iostream>
using namespace std;

int main() {
    int k;
    cin >> k;
    while (k % 2 == 0){
        k = k / 2;
    }
    if(k == 1){
        cout << "ya" << endl;
    }
    else {
        cout << "bukan" << endl;
    }
    return 0;
  
}