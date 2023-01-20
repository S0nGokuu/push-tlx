#include <iostream>
using namespace std;

int main(){
    int n;
    int m;
    int a, b;
    a = 100000;
    b = -100000;
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> m;
        if(m > a ){
            a = m;
        }
        if(m < b){
            b = m;
        }

        cout << a << b;
    }
}