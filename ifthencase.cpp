#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;
    if( a > 0 and a <= 9){
        cout << "satuan";
    }
    else if(a >= 10 and a <= 99){
        cout << "puluhan";
    }
    else if(a >= 100 and a <= 999){
        cout << "ratusan";
    }
    else if(a >= 1000 and a <= 9999){
        cout << "ribuan";
    }
    else if(a >= 10000 and a <= 99999){
        cout<< "puluhribuan";
    }
}