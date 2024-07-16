#include<bits/stdc++.h>
#include<iostream>
using namespace std ;

int main(){
    vector<int> arr;
    int n ;
    cin >> n ;
    cin.ignore() ;
    string input;
    getline(cin , input);
    input.erase(remove(input.begin() , input.end() , '[') , input.end());
    input.erase(remove(input.begin() , input.end() , ']') , input.end());
    stringstream ss(input);

    string temp ;
    while(getline(ss , temp , ',')){
        arr.push_back((stoi(temp)));
    }
    map<int, int>mpp;
    for(auto it : arr){
        mpp[it]++ ;
    }
    int sum =  0 ;
    for(auto it : mpp){
        if(it.second == 1){
            sum += it.first ;
        }
    }
    
    cout << n << endl;

    cout << sum ;


}