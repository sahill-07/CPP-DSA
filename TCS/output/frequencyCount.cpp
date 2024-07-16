#include<bits/stdc++.h>
#include<iostream>
using namespace std ;

int main(){
    vector<int>arr ;
    string input ;
    getline(cin , input);
    stringstream ss(input) ;

    string temp ;

    while(getline(ss, temp , ',')){
        arr.push_back(stoi(temp));
    }

    unordered_map<int, int> mpp ;

    for(int i = 0 ; i < arr.size() ; i++ ){
        mpp[arr[i]]++;
    }

    for(auto it : mpp){
        cout << it.first << " " << it.second << endl ;
    }
}