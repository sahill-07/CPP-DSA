#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main () {
    int n ;
    cout << "Enter the number of elements in the array : ";
    cin >> n ;

    int arr[n];
    cout << "Enter the elements in the array : ";
    for(int i = 0 ; i < n ; i++){
        cin >> arr[i];
    }

    for(int i = 0 ; i < n-1 ; i++){
        int minIndex = i ;
        for(int j = i + 1 ; j < n ; j++){
            if(arr[j] < arr[minIndex]){
                minIndex = j ;

            }
        }
        swap(arr[minIndex] , arr[i]);
    }

     for(int i = 0 ; i < n ; i++){
        cout << arr[i] << " ";
    }
    
    return 0;
}