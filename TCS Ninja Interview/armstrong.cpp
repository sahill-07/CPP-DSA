#include <iostream>
using namespace std;

int main() {
    int n ;
    cin >> n ;
    int temp =  n , ans = 0 ;
    while(temp > 0 ){
        int digit = temp % 10 ; 
        ans += digit * digit * digit ;
        temp /= 10 ;
    }
    if(ans == n){
        cout << "armstrong number" ;
    }
    else{
        cout << "not an armstrong number" ;
    }
}
