#include<bits/stdc++.h>
#include<iostream>
using namespace std ;

int main(){

    vector <int> arr ;
    int k ;
    cout << "enter k" << endl ;
    cin >> k ;
    cin.ignore();
    cout << "enter array" ;
    string input ;
    getline(cin , input);
    stringstream ss (input);
    string temp ;

    while(getline(ss , temp , ',' )){
        arr.push_back(stoi(temp));
    }
    for(int i = 0 ; i < arr.size(); i++){
        int sum = 0 ;
        for(int j = i ; j < arr.size() ; j++){
            sum += arr[j] ;

            if(sum == k){
                
                for(int k = i ; k <= j ; k++){
                    cout << arr[k] << " " ;
                }
            cout << endl ;
            }
        }

    }

    return 0 ;
}