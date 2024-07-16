#include<bits/stdc++.h>
#include<iostream>
using namespace std ;

int main(){
    int mini = INT_MAX ;
    vector<int>arr ;
    string input ;
    getline(cin , input);
    stringstream ss (input) ;
    string temp ;

    while(getline(ss , temp , ',')){
        arr.push_back(stoi(temp));
    }

    for(int i = 0 ; i < arr.size() ; i++){
        mini = min(mini , arr[i]);
    }

    cout << mini << endl ;
}