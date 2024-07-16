#include<bits/stdc++.h>
#include<iostream>
using namespace std ;

int main() {
    string s ;
    getline(cin , s);
    string ans ="" ;
    for(int i = s.size() - 1 ; i >= 0 ; i--){
        ans+= s[i] ;
    }

    cout << ans ;

    return 0 ;
}