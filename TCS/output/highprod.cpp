#include<bits/stdc++.h>
#include<iostream>
using namespace std ;

int main() {
    vector<int>arr ;
    int a ;
    cin >> a ;
    cin.ignore();
    string input ;
    getline(cin , input) ;
    input.erase(remove(input.begin() , input.end() , '[') , input.end());
    input.erase(remove(input.begin() , input.end() , ']') , input.end());
    stringstream ss(input);
    string temp ;

    while(getline(ss , temp , ',')){
        arr.push_back(stoi(temp));
    }
    int maxi = INT_MIN ;
    for(int i = 0 ; i < arr.size() - 2 ; i++){
       for(int j = i + 1 ; j < arr.size() - 1 ; j++){
          for(int z = j + 1 ; z < arr.size() ; z++){
            int prod = arr[i] * arr[j] * arr[z] ;
            maxi = max(prod , maxi);
          }
       }
    }

    // sort(arr.begin() , arr.end());
    // int n = arr.size() ;
    // int n1 = arr[n-1];
    // int n2 = arr[n-2];
    // int n3 = arr[n-3];

    // int neg1 = arr[0] , neg2 = arr[1] ;

    // maxi = max((n1 * n2 * n3), (neg1 * neg2 * n1) );

    cout << maxi ;

    return 0 ;
}