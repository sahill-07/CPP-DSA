#include<bits/stdc++.h>
#include<iostream>
using namespace std ;

int main(){
    vector <int> arr ;
    string input ;
    stringstream ss(input);
    int temp ;
    while(cin >> input){
        arr.push_back((input));
    }
    for(int i = 0 ; i < arr.size() ; i++){
        cout << arr[i] ;
    }
    for(int i = 0 ; i < arr.size() ; i++){
        for(int j = i  ; j <= i ; j++){
            cout << arr[j] << " ";
        }

        cout << "," ;
    }

}