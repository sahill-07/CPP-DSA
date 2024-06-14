#include<iostream>
#include<bits/stdc++.h>
using namespace std ;

int main() {

    int arr[10] = {1,5,3};

    // cout << "Addr of first memory block of array is : " << arr << endl  ;

    // cout << "Addr of first memory block of array is : " << &arr[0] << endl  ;

    // cout << "Addr of first memory block of array is : " << *arr << endl  ;

    // cout << "Addr of first memory block of array is : " << *arr+1 << endl  ;

    // cout << "Addr of first memory block of array is : " << *(arr+1) << endl  ;

    int i = 1 ;
    cout << "Addr of first memory block of array is : " << *(i+arr) << endl  ;

    return 0 ;
}