#include<bits/stdc++.h>
#include<iostream>
using namespace std ;

int main() {

    vector <int> arr ;
    string input ;
    getline(cin , input);
    stringstream ss(input) ;

    string temp ;
    while(getline(ss, temp , ',')){
        arr.push_back(stoi(temp));
    }

    for(int i : arr){
        cout << i << " " ;
    }

    return 0 ;
}