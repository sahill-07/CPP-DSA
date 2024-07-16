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

    map<int,int>mpp ;
    int n = arr.size();
    for(int i = 0 ; i < n ; i++){
        mpp[arr[i]]++;
    }

    for(auto it : mpp){
        if(it.second > 1){
            cout << it.first << " " ;
        }
    }

}
