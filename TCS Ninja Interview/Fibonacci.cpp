#include <iostream>
using namespace std;

int main() {
    int n ;
    cin >> n ;
    int a = 0 , b = 1 ;
    for(int i = 0 ; i <= n ; i++){
        cout << a << " " ;
        int temp = a ;
        a = b ;
        b = temp + a ;
    }
    
    return 0;
}
