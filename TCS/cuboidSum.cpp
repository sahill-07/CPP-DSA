#include<bits/stdc++.h>
#include<iostream>
using namespace std ;

int main (){

    int a , b ;
    cin >> a >> b ;
    int sum = 0 ;

    for(int i = a ; i <= b ; i++){
        sum += i * i * i;
        cout << sum << endl ;
    } 

    cout << sum << endl ;

    return 0 ;
}