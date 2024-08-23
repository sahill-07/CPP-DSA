#include <iostream>
using namespace std;

int main() {
    int n ;
    cout << "Enter number : " ;
    cin >> n ;
    int rev = 0 , temp = n ;
    
    while(temp > 0){
        int digit = temp % 10 ;
        rev = rev * 10 + digit ;
        temp /= 10 ;
    }
    cout<< rev  << endl ;
    if(rev == n){
        cout << "Palindrome" << endl ;
    }
    else{
        cout << "Not a palindrome" << endl ;
    }

    return 0;
}