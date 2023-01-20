#include <iostream>
using namespace std;
int main(){
    int n; 
    cin >> n;
    for (int i = n; i >= 1; i--){
        int hasil = n % i;
        if (hasil == 0){
            cout << i << endl;
        }else;
    }
}
