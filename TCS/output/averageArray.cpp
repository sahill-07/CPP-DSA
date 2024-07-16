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

    int sum = 0 ;
    for(int i = 0 ; i < arr.size() ; i++){
        sum += arr[i] ;
    }

    cout << double(sum / arr.size() )<< endl;
}