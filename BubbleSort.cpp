#include<iostream>
#include<bits/stdc++.h>
using namespace std ;
int main () {
    int n ;
    cout << "Enter the number of elements in the array : ";
    cin >> n ;

    int arr[n];
    cout << "Enter the elements in the array : ";
    for(int i = 0 ; i < n ; i++){
        cin >> arr[i];
    }

    for(int i = 1 ; i < n ; i++){
        for(int j = 0 ; j < n-i ; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }

    for(int i = 0 ; i < n ; i++){
        cout << arr[i] <<" ";
    }
}