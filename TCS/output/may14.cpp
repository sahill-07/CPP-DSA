#include<bits/stdc++.h>
#include<iostream>
using namespace std ;

int main(){
    vector<int> arr;
    int a , b ;
    cin >> a >> b ;
    double price = 5 ;
    price += a * 2 ;
    price += (b/10) * 0.5 ;

    cout << fixed << setprecision(10) << price ;

}