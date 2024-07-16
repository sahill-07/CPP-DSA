#include<bits/stdc++.h>
#include<iostream>
using namespace std ;

int main() {
    string s ;
    getline(cin , s) ;
    int vowels = 0 , space =  0 , a = 0 ;
    tolower(s);
 
    for(int i = 0 ; i < s.size() ; i++){
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
            vowels++;
        }
        if(s[i] == ' '){
            spaces++;
        }
        else{
            a++;
        }

    }

    cout << vowels << " " << spaces << " " a ;

    return 0 ;
}