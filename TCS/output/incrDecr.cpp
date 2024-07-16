#include<bits/stdc++.h>
#include<iostream>
using namespace std ;

int main(){
    vector<int> arr ;
    string input ;
    getline(cin , input) ;
    stringstream ss (input);
    string temp ;
    while(getline(ss , temp , ',')){
        arr.push_back(stoi(temp));
    }

    sort(arr.begin() , arr.end());
    int start = arr.size() / 2 ;
    reverse(arr.begin() + start , arr.end());
    // for(int i = 0 ; i < arr.size() / 2 ; i++){
    //     cout << arr[i] << " " ;
    // } 

    for(int i = 0 ; i < arr.size() ; i++ ){
        cout << arr[i] << " " ;
    }

    // for(int i = arr.size() - 1 ; i > arr.size()/2 - 1 ; i-- ){
    //     cout << arr[i] << " " ;
    // }
}