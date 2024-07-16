#include<bits/stdc++.h>
#include<iostream>
using namespace std ;

int main() {
    vector<int> arr ;
    int k ;
    cin >>  k ;
    cin.ignore();
    string input ;
    getline(cin , input);
    stringstream ss(input);
    string temp ;

    while(getline(ss , temp , ',')){
        arr.push_back(stoi(temp));
    }
    sort(arr.begin() , arr.end());
    int small = arr[0] , large = arr[arr.size() - 1];

    cout << large - small ;

}