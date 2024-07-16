#include<bits/stdc++.h>
#include<iostream>
using namespace std ;

int main() {
    string s ;
    getline(cin , s) ;
    int vowels = 0 , space =  0 , a = 0 ;
    transform(s.begin() , s.end() , s.begin() , ::tolower);
     for(int i = 0 ; i < s.size() ; i++){
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
            vowels++;
        }
        if(s[i] == ' '){
            space++;
        }
        else{
            a++;
        }

    }

    cout << vowels << " " << space << " "  << a ;

    return 0 ;
}