#include<bits/stdc++.h>
#include<iostream>
using namespace std ;

int main(){
    int sum  = 0;
    int n ;
    cin >> n ;

    for(int i = 1 ; i < 11 ; i++){
        sum += n * i ;
    }

    cout << sum << endl ;
}