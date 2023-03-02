#include <iostream>
using namespace std;

int main (int left,int right){
    cin >> left >> right;
    int mid = left;
    int res = 0;
    
    while(mid <= right){
        if(mid % 11 == 0){
            res++;
            mid++;
        }
        else if(mid % 12 == 0){
            mid ++;
        }
        else{
            if(mid % 4 == 0){
                res++;
            }
            mid++;
        }
    }
    cout << res;
}
