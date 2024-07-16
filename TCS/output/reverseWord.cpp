#include<bits/stdc++.h>
#include<iostream>
using namespace std ;

int main(){
    string s ;
    getline(cin , s);

    stack<string>st ;
    string str = "" ;
    for(int i = 0 ; i < s.size() ; i++){
        if(s[i] == ' '){
            st.push(str);
            str = "" ;
        }
        else   
            str += s[i] ;
    }

    if(!st.empty()){
        st.push(str);
    }

    string ans = "" ;

    while(st.size() != 1){
        ans += st.top() + " " ;
        st.pop();
    }

    ans += st.top() ;

    cout << ans ;

}