#include<bits/stdc++.h>
#include<iostream>
using namespace std ;

int main(){
    vector<int>arr;
    string input ;
    getline(cin , input);
    stringstream ss (input) ;
    string temp ;

    while(getline(ss , temp , ',')){
        arr.push_back(stoi(temp));
    }

    // sort(arr.begin() , arr.end());
    // if(arr.size() == 0 || arr.size() == 1){
    //     cout << -1 << " "  << -1 ;
    // }

    int small = INT_MAX , second_small = INT_MAX ;
    int large = INT_MIN , second_large = INT_MIN ;

    for(int i = 0 ; i < arr.size() ; i++){
        small = min(small , arr[i]);
        large = max(large , arr[i]);
    }

    for(int i = 0 ; i < arr.size() ; i++){
        if(arr[i] < second_small && arr[i] != small){
            second_small = arr[i] ;
        }
        if(arr[i] > second_large && arr[i] != large){
            second_large = arr[i] ;
        }
    }

    cout << "Second Smallest " << arr[1] << endl ;
    cout << "Second Greatest " << arr[arr.size() - 2] << endl ;

    cout << "Second Smallest " << second_small << endl ;
    cout << "second Greatest " << second_large << endl ;

}