
#include<iostream>
#include<bits/stdc++.h>
using namespace std ;

int binarySearch(int arr[] , int n , int key){
    int low = 0 ;
    int high = n-1;
    int mid = (low + high)/2;

    while (low <= high ){
        if(key == arr[mid]){
            return mid ;
        }
        else if(key > arr[mid]){
            low = mid + 1 ;
        }
        else{
            high = mid - 1 ;
        }
        mid = (low + high)/2;
    } 
    return mid ;
}

int main () {

    int n , key ;
    cout << "Enter the number of elements in the array : ";
    cin >> n ;
    cout << "Enter the key to be find : " ;
    cin >> key ;
    int arr[n];
    cout << "Enter the elements in the array : ";
    for(int i = 0 ; i < n ; i++){
        cin >> arr[i];
    }

    cout << binarySearch(arr , n , key);
    return 0;
}