#include<bits/stdc++.h>
#include<iostream>
using namespace std ;

int main(){
    vector<string> arr;
    string input;
    getline(cin , input);
    stringstream ss(input);

    string temp ;
    while(getline(ss , temp , ' ')){
        arr.push_back(temp);
    }
    map<string, int>mpp;
    for(auto it : arr){
        mpp[it]++ ;
    }
    vector<string> ans;
    for(auto it : mpp){
        ans.push_back(it.first) ;
    }
    sort(ans.begin() , ans.end());
    for(auto it : ans ){
        cout << it << " " ;
    }
    sort(ans.rbegin() , ans.rend());
    for(auto it : ans ){
        cout << it << " " ;
    }


}