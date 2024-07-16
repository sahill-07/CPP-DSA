#include<bits/stdc++.h>
#include<iostream>
using namespace std ;

int main() {
    vector<int> arr ;
    string input ;
    getline(cin , input);
    stringstream ss(input);
    string temp ;

    while(getline(ss , temp , ',')){
        arr.push_back(stoi(temp));
    }

    // for(int i = arr.size() - 1 ; i >= 0 ; i--){
    //     cout << arr[i] << " "  ;
    // }
    // int start = 0 , end = arr.size() - 1 ; 
    // while(start <= end){
    //     swap(arr[start] , arr[end]);
    //     start++ ;
    //     end-- ;
    // }

    reverse(arr.begin() , arr.end());

    for(int i = 0 ; i < arr.size() ; i++){
        cout << arr[i] << " "  ;
    }
}