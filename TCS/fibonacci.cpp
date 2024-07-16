#include<bits/stdc++.h>
#include<iostream>
using namespace std ;

int main() {

    vector<int> ans ;
    int n ;
    cin >> n ;
    int a = 0 , b = 1 ;
    ans.push_back(0);
    ans.push_back(1);  

    for(int i = 2 ; i <= n ; i++ ){
        int temp =  a + b ;
        a = b ;
        b = temp ;
        ans.push_back(temp); 
    }
    int sum  = 0 ;
    for(int i = 0 ; i < n ; i++){
        sum += ans[i] ;
    }

    cout << sum ;

    return 0 ;
}