#include<bits/stdc++.h>
#include<iostream>
using namespace std ;

int main(){
    int n  ;
    cin >> n ;
    int binary[32] = {0} ;
    int i = 0 ;
    while(n){
        binary[i] = n % 2 ;
        i++ ;
        n /= 2 ;
    }

    for(int ind = i - 1 ; ind >= 0 ; ind--){
        cout << binary[ind] ;
    }
}