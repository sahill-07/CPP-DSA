#include<bits/stdc++.h>
#include <iostream>
using namespace std ;
int main()
{
    int n , ans = 0 ;
    cin >> n ;
    vector<int> arr ;
    for(int i = 0 ; i < n ; i++ ){
        int temp ;
        cin >> temp ;
        arr.push_back(temp);
    }
    // sort(arr.begin() , arr.end());
    
    // for(int i = 0 ; i < n ; i++){
    //     if(arr[i] != i + 1){
    //         ans = i+1 ;
    //         break ;
    //     }
    // }
    
    // cout << ans ;
    
    int sum1 = (n*(n+1))/2 ;
    int sum2 = 0 ;
    
    for(int i = 0 ; i < n ; i++){
        sum2 += arr[i] ;
    }
    
    cout << abs(sum1 - sum2) ;

    return 0;
}