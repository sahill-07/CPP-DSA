#include<bits/stdc++.h>
#include<iostream>
using namespace std ;

int main() {
    int k ; 
    cin >> k ;
    cin.ignore();
    vector <int> arr ;
    string input ;
    getline(cin , input);
    input.erase(remove(input.begin() , input.end() , '[') , input.end());
    input.erase(remove(input.begin() , input.end() , ']') , input.end());
    stringstream ss (input) ;
    string temp ;

    while(getline(ss , temp , ',')){
        arr.push_back(stoi(temp));
    }
    int n = arr.size() ;
    for(int i = 0 ; i < n  ; i++){
        int sum = 0 ;
        for(int j = i ; j < n ; j++){
            sum += arr[j] ;

            if(sum == k){
                cout << "[" ;
                for(int k = i ; k <= j ; k++){
                    cout << arr[k]  ;
                    if(k != j){
                        cout << ", " ;
                    }
                }
                cout << "]" ;
                cout << endl ;
            }
        }
    }
}