#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int angka;
    angka = -1;
    for(int i= 1; i<=n; i++){
        for(int j= 1; j<=i; j++){
            angka++;
            if(angka == 10){
                angka = 0;
            }
            cout << angka;
        }
        cout << endl;
    }
}