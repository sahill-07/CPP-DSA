#include<bits/stdc++.h>
#include<iostream>
using namespace std ;

bool isArmstrong(int num , int power){
    int temp = num ;
    int armstrong = 0 ;
    while(temp > 0){
        int digit = temp % 10 ;
        armstrong += static_cast<int>(pow(digit , power)) ;
        // cout << "arm func : " << armstrong << endl ;
        temp /= 10 ;
    }
    if(num != armstrong)
        return false ;

    return true ;
}

int main(){
    vector<int> arr ;
    string input ;
    getline(cin , input) ;
    input.erase(remove(input.begin() , input.end() , '[') , input.end());
    input.erase(remove(input.begin() , input.end() , ']') , input.end());

    stringstream ss(input);
    string t ;

    while(getline(ss , t , ',')){
        arr.push_back(stoi(t));
    }

    for(int i = 0 ; i < arr.size() ; i++){
        int n = to_string(arr[i]).size();
        // cout << n << " " ;/
        if(isArmstrong(arr[i] , n)){
            cout << arr[i] << " " << endl ;
        }
    }

    return 0 ;

}

