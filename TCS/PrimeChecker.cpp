#include<bits/stdc++.h>
#include<iostream>
using namespace std ;

bool isPrime(int n){
    if(n <= 1)  return false ;
    bool prime = true ;
    for(int i = 2 ; i < n ; i++){
        if(n % i == 0){
            prime = false;
            break;
        }
    }

    return prime ;
}

bool sum(int n){
    int sum = 0 ;
    while(n > 0){
        int digit = n % 10 ;
        sum += digit ;
        n /= 10 ;
    }

    if(isPrime(sum)){
        return true ;
    }

    return false ;
}

int main () {

    int a , b ;
    cin >> a >> b ;

    for(int i = a ; i <= b  ; i++){
        if(isPrime(i) && sum(i)){
            cout << i << " is prime" << endl ;
        }
    }

    return 0 ;
}