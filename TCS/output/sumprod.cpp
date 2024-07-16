// 5,6,1,8,7,9

#include<bits/stdc++.h>
#include<iostream>
using namespace std ;

int main(){
    vector<int> arr ;
    string input ;
    getline(cin , input);
    stringstream ss(input) ;
    string temp ;

    while(getline(ss , temp , ',')){
        arr.push_back(stoi(temp));
    }
    int sum = 0 , prod = 1 ;
    for(int i = 0 ; i < arr.size() ; i++ ){
        sum  += arr[i] ;
        prod *= arr[i];
    }

    cout << "sum " << sum << endl ;
    cout << "product " << prod << endl ;
}