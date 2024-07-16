#include<bits/stdc++.h>
#include<iostream>
using namespace std ;

int gcd(int a , int b){
    while(a > 0 && b > 0){
        if(a > b){
            a = a % b ;
        }
        else{
            b = b % a ;
        }
    }

    if(a == 0)  
        return b ;  
    
    return a ;

}

int main(){
    int a , b ;
    cin >> a >> b ;

    cout << "LCM" << (a/gcd(a,b))*b << endl;
    cout << "GCD" << gcd(a,b) ;
    return 0 ;
}