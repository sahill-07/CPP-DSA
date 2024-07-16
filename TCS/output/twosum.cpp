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
    sort(arr.begin() , arr.end());
    vector<pair<int,int>> ans ;
    int i = 0 , j = n - 1 ;
    while(i < j){
        int sum = arr[i] + arr[j] ;
        if(sum == k){
            cout << arr[i] << " " << arr[j] << endl;
            i++ ; j--;
        }
        else if(sum > k){
            j--;
        }
        else{
            i++;
        }
    }


}