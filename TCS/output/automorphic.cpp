#include<bits/stdc++.h>
#include<iostream>
using namespace std ;

int main(){
    string s  ;
    cin >> s ;
    int size = s.size();
    int num = 1 ;
    for(int i = 0 ; i < size ; i++){
        num *= 10 ;
    }

    int n = stoi(s);
    int sq = n * n  ;
    int digit = sq % num ;

    if(n == digit){
        cout << "automorphic" ;
    }
    else{
        cout << "not automorphic" ;
    }

    
}