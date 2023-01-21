#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        int spasi =n-i;
        for(int j = 1; j <= spasi; j++){
            cout << " ";
        }
        for(int j = 0; j <= i; j++){
            cout << j;
        }
        cout << endl;
    }
    
}

//4
//    * 4 1
//   ** 3 3
//  *** 2 5
// **** 0 