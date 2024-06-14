// Decimal to Binary
/*
#include<iostream>
#include<math.h>
using namespace std;
int main (){
    int number ;
    cout << "Enter the number : " ;
    cin >> number ;

    int answer = 0 ; 
    int i=0;
    while(number != 0) {
        int bit = number&1;
        answer = ( bit*pow(10,i) )+ answer ; 
        i++;
        number = number>>1;
    }
    cout << answer;
    return 0;
}
*/

// Binary to decimal
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main () {
    int number ;
    cout << "Enter the number : " ;
    cin >> number ;

    int answer = 0 , i=0 ;
    while(number != 0){
        int bit = number % 10 ;
        if(bit == 1) {
            answer = ( pow( 2 ,i ) ) + answer ;
        }
        number = number / 10;
        i++;
    }
    cout << answer;
   
    return 0;
}
