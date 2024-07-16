#include<bits/stdc++.h>
#include<iostream>
using namespace std ;

int main(){
    vector <int>arr ;
    int k ;
    cin >> k ;
    cin.ignore();
    string input ;
    getline(cin , input);
    stringstream ss (input) ;
    string t ;
    while(getline(ss , t , ',')){
        arr.push_back(stoi(t));
    }

    k = k % arr.size() ;

    // reverse(arr.begin() , arr.end());
    // reverse(arr.begin() , arr.begin() + k);
    // reverse(arr.begin() + k , arr.end());
    int n = arr.size();
    vector<int>temp(5);
  for (int i = 0; i < k; i++)
  {
    temp[i] = arr[i];
  }
  for (int i = 0; i < n - k; i++)
  {
    arr[i] = arr[i + k];
  }
  for (int i = n - k; i < n; i++)
  {
    arr[i] = temp[i - n + k];
  }

    for(int i = 0 ; i < n ; i++){
        cout << arr[i] << " ";
    }
}