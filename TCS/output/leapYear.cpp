#include<bits/stdc++.h>
#include<iostream>
using namespace std ;

bool isLeap(int n){
    if(n % 400 == 0){
        return true ;
    }
    else if(n % 4 == 0 && n % 100 != 0){
        return true ;
    }

    return false ;
}

int main(){
    int start , end ;
    cin >> start >> end ;
    
    for(int i = start ; i <= end ; i++){
        if(isLeap(i)){
            cout << i << " " ; 
        }
    }

}
