#include <bits/stdc++.h>
using namespace std ;
int main(){
    int num = 5 ;

    cout << num << endl ;

    int *ptr = &num ;

    int *p = &num ;

    // cout << "This is address " << ptr << endl ;

    // cout << "This is the actual value " << *ptr << endl ;

    cout << "This is address " << p << endl ;

    cout << "This is the actual value " << *p << endl ;


    return 0 ;
}