#include <iostream>
using namespace std;

int main(){
    double n;
    int f, c;
    cin >> n;
    int bulat = int(n);
    if(n == bulat){
        cout<< bulat << " " << bulat;
    }
    else if(n > 0){
        f = bulat;
        c = bulat +1;
        cout << f << " " << c;
    }
    else{
        f = bulat -1;
        c = bulat;
        cout << f << " " << c;
    }
}