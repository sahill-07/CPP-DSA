#include<bits/stdc++.h>
#include<iostream>
using namespace std ;

int main() {
    vector<int>arr ;
    int n ;
    cin >> n ;
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

    for(int i = 0 ; i < arr.size() ; i++){
        if(arr[i] % 3 == 0 && arr[i] % 5 == 0){
            cout << "ThreeFive" << " " ;
        }
        else if(arr[i] % 3 == 0){
            cout << "Three" << " " ;
        }
        else if(arr[i] % 5 == 0){
            cout << "Five" << " " ;
        }
        else{
            cout << arr[i] << " " ;
        }
    }

    return 0 ;
}