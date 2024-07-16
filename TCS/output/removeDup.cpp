#include<bits/stdc++.h>
#include<iostream>
using namespace std ;

int main(){
    string s ;
    getline(cin , s);

    map<char , int>mpp ;
    string ans = "" ;
    ans+= s[0];
    for(int i = 1 ; i < s.size() ; i++){
        if(ans.find(s[i]) == string::npos){
            ans += s[i] ;
        }
    } 
    cout << ans ;
}