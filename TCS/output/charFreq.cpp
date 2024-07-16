#include<bits/stdc++.h>
#include<iostream>
using namespace std ;

int main(){
    string s ;
    getline(cin , s);

    map<char , int>mpp ;

    for(int i = 0 ; i < s.size() ; i++){
        mpp[tolower(s[i])]++;
    } 

    for(auto it : mpp){
        cout << it.first << it.second << " " ;
    }
}