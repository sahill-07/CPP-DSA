Approach :

We start with the first element , and then compare the element with the elements next to it.
Eg : consider the array {7 , 7 ,5 , 5 , 7 , 7 , 1 ,5 , 5 , 7 , 7 , 5 , 5, ,5 ,5}
so we will put the pointer at 7 and then compare with it with the index number 1 2 3 4 and so on.
if the element and the index are similar then increment the count variable. If not then decrement the count variable.
If the value of count becomes zero then move the pointer.





#include<bits/stdc++.h>
#include<iostream>
using namespace std ;

int MajorityElement(vector<int>v , int n){

}

int main () {
    int n ;
    cout << "Enter value of n : " << endl ;
    cin >> n ;

    vector<int>v;
    for(int i = 0 ; i < n ; i++){
        int temp ;
        cin >> temp ;
        v.push_back(temp);
    }

    cout << MajorityElement(v,n) << endl;
 
    return 0 ;
}