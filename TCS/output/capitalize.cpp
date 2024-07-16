#include<bits/stdc++.h>
#include<iostream>
using namespace std ;

int main(){
    string s ;
    getline(cin , s );

    for(int i = 0 ; i < s.size() - 1 ; i++){
        if(i == 0 || s[i - 1] == ' ' || s[i+1] == ' '){
            s[i] = toupper(s[i]);
        }
    }
    s.back() = toupper(s.back());
    cout << s ;
}