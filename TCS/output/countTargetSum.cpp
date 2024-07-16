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
    int count = 0 ;
    for(int i = 0 ; i < arr.size() ; i++){
        int sum = 0 ;
        for(int j = i ; j < arr.size() ; i++){
            sum += arr[j] ;
            if(sum == k){
                count++;
            }
        }
    }

    cout << count ;
}