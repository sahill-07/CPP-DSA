#include<bits/stdc++.h>
#include<iostream>
using namespace std ;

int main(){
    vector<int>arr;

    string input ;
    getline(cin , input) ;
    stringstream ss (input) ;
    string temp ;
    while(getline(ss , temp , ',')){
        arr.push_back(stoi(temp));
    }

    // set<int> s ;
    // for(int i = 0 ; i < arr.size() ; i++){
    //     s.insert(arr[i]);
    // }

    // for(auto it : s){
    //     cout << it <<  " " ;
    // }

    map<int,int>mpp ;
    int n = arr.size();
    for(int i = 0 ; i < n ; i++){
        if(mpp.find(arr[i]) == mpp.end()){
            cout << arr[i] << ' ' ;
            mpp[arr[i]]++;
        }
    }

}