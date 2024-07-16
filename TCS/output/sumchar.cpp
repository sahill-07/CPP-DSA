#include<bits/stdc++.h>
#include<iostream>
using namespace std ;

int main(){
    string s ;
    getline(cin , s);
    string temp = "" ;
    int sum = 0 ;

    for(int i = 0 ; i < s.length() ; i++){
        if(isdigit(s[i])){
            temp += s[i] ;
        }
        else{
            if(!temp.empty()){
                sum += stoi(temp);
                temp = "" ;
            }
        }
    }

    if(!temp.empty()){
        sum += stoi(temp);
    }

    cout << sum ;

}