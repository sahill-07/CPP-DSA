#include<bits/stdc++.h>
#include<iostream>
using namespace std ;

int main (){
    int n ;
    cin >> n ;
    cin.ignore() ;
    map<string,int> mpp ;
    for(int i = 0 ; i < n ; i++){
        string input ;
        cin >> input ;
        mpp[input]++;
    } 
    int count = 0 ;
    for(auto it : mpp){
        string shoeSize = it.first ;
        string opposite = "" ;
        if(shoeSize.back() == 'L'){
            opposite = shoeSize.substr( 0 , shoeSize.size() - 1 ) + 'R';
            // cout << opposite << " ";
        }
        else{
            opposite = shoeSize.substr( 0 , shoeSize.size() - 1 ) + 'L' ;
            // cout << opposite << " ";
        }

        if(mpp.find(opposite) != mpp.end()){
            count += min(it.second , mpp[shoeSize]);
        }
    }

    cout << count / 2 ;
}