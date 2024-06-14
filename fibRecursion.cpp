// #include<bits/stdc++.h>
// #include<iostream>
// using namespace std ;

// int fib(int n ){
//     if(n == 0){
//         return 0 ;
//     }
//     if(n == 1){
//         return 1 ;
//     }

//     int ans = fib(n-1) + fib(n-2) ;
//     // cout << ans << endl;
//     return ans ;
// }
// int main(){
//     int n ;
//     cin >> n ;
//     cout << fib(n) << endl;
// }

#include <iostream>
// #include <cstdio>
using namespace std;

int main() {
    string alpha[10] = {"one" , "two" , "three" , "four" , "five" , "six" , "seven" , "eight" , "nine"};
    
    int num ;
    int arr[9] = {1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9};
    cin >> num ;
    bool isEven = false ;
    for(int i = 0 ; i < num ; i++){
        if(num == arr[i]){
            cout << alpha[i] << endl;
        }
    }
    if(num > 9 && num % 2 == 0 ){
            cout << "even" << endl ;
        }
    else if(num > 9 && num % 2 != 0){
        cout << "odd" << endl ;
    }    
    return 0;
}