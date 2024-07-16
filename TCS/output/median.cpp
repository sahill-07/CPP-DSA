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

    int n = arr.size() ; 
    sort(arr.begin() , arr.end());
    if(n % 2 != 0 ){
        cout << arr[n/2]  << endl ;
    }
    else{
        cout << double(arr[n/2] + arr[(n-1) / 2]) /2 << endl ;
    }
}