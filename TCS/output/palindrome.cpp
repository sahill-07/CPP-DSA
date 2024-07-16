#include<bits/stdc++.h>
#include<iostream>
using namespace std ;

int main() {
    string input ;
    getline(cin , input) ;

    int start = 0 , end = input.size() - 1 ;
    bool is = true ;
    while(start <= end){
        if(input[start] != input[end]){
            is = false ;
            break;
        }
        start++ ; end--;
    }
    
    if(is)
        cout << "YES" ;
    else
        cout << "NO" ;


    return 0 ;
}