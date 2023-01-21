#include <iostream>
using namespace std;

int main() {
    int n,a;
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> a;
        if(a/a == 1){
            cout << "YA";
        }else{
            cout << "tidak"; 
        }
    }
}