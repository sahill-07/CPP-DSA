// Maximun and Minimum element inan array

/*
#include<iostream>
#include<bits/stdc++.h>
using namespace std ;

int max(int arr[] , int n){
    int maxi = -1;
    for(int i = 0 ; i < n ; i++){
        if(arr[i] > maxi){
            maxi =arr[i];
        }
    }
    return maxi;
}

int min(int arr[] , int n){
    int mini = INT_MAX;
    for(int i = 0 ; i < n ; i++){
        if(arr[i] < mini){
            mini =arr[i];
        }
    }
    return mini ;
}

int main(){
    int n;
    int arr[100];
    cout << "Enter the number od elements in an array : " ;
    cin >> n;
    cout << "Enter the elements in the array : " ;

    for (int i = 0 ; i < n ; i++){
        cin >> arr[i] ; 
    }

    cout << max(arr , n) << endl;
    cout << min(arr , n);
    
    return 0;
}
*/

// --------------------------------------------------------------------------------------------------------------------

// sum of all elememts in an array

/*
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int sum(int arr[] ,int n){
    int sum = 0 ;
    for(int i = 0 ; i < n ; i++){
        sum = sum + i;
    }
    return sum;
}

int main (){
    int n ;
    cout << "Enter the number of elements in an array : " ;
    cin >> n ;
    int arr[n];
    cout << "Enter the elements : ";
    for(int i = 0 ; i < n ; i++){
        cin >> arr[i];
    }

    cout << "The sum is : " << sum(arr,n);

    return 0 ;
}
*/

// ------------------------------------------------------------------------------------------------------------------

//Linear Search / searching an element in an array
/*
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
*/

// -------------------------------------------------------------------------------------------------------------------

// Reversing an array

/*
#include<iostream>
#include<bits/stdc++.h>
using namespace std ;

int main (){
    int n ;
    cout << "enter the number of elements in an array : ";
    cin >> n ;
    int arr[n];
    cout << "Enter the elements : " ;
    for(int i = 0 ; i < n ; i++ ){
        cin >> arr[i];
    } 

    for(int i = n-1 ; i >= 0 ; i-- ){
        cout << arr [i] << " ";
    }

    return 0;
}
*/

// --------------------------------------------------------------------------------------------------------------------

// Swapping alternate elements in an array

/*
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cout << "Enter the number of elements in the array : " ;
    cin >> n ;
    int arr[n];
    for(int  i = 0 ; i < n ; i++){
        cin >> arr[i];
    }

    for(int i = 0 ; i < n ; i+=2 ){
        if(i+1 < n ){
            swap(arr[i],arr[i+1]);
        }
        
    }

    for(int i = 0 ; i < n ; i++) {
        cout << arr[i] << " " ;
    }

    return 0; 
}
*/

// -------------------------------------------------------------------------------------------------------------------
//  Find Unique 


/*
#include<iostream>
#include<bits/stdc++.h>
using namespace std ;

int unique(int arr[] , int n ){
    int ans = 0 ;
    for(int i = 0 ; i < n ; i++){
        ans = arr[i] ^ ans ;
    }
    return ans ;
}
int main () {
    int n ;
    cout << "Enter the number elements in the array : "  ;
    cin >> n ;
    int arr[n];
    cout <<"Enter the elements in the array : " ;
    for(int i = 0 ; i < n ; i++) {
        cin >> arr[i] ;
    }

    cout << unique(arr , n);
    return 0;
}

*/

// ---------------------------------------------------------------------------------------------------------------------



