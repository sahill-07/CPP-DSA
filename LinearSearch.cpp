#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void LinearSearch(int arr[] , int n , int key ){
    bool isFound = false ;
    int position ;
    for (int i = 0 ; i < n ; i++ ){
        if(arr[i] == key){
            isFound = true ;
            position = i + 1  ;
        }
    }
    
    if(isFound){
        cout << "Key found at " << position << endl ; 
    }
    else{
        cout << "Key not found !" << endl;
    }
}
int main(){
    int n , key;
    cout << "Enter the number of elements in an array : " ;
    cin >> n ;
    cout << "Enter the key to be found : " ;
    cin >> key ;
    cout << "Enter the elements : ";
    int arr[n];

    for(int i = 0 ; i < n ; i++){
        cin >> arr[i] ;
    } 

    LinearSearch(arr , n , key );

}