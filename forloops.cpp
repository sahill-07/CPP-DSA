// Sum of n natural numbers
/*
#include<iostream>
using namespace std;
int main () {
    int n ;
    cout << "enter the value of n : " ;
    cin >> n;
    int sum =0 ;
    for(int i=0 ; i <= n ; i++){
        sum = sum + i ;    
    }

    cout << "the sum is : " << sum << endl;
    return 0;
}
*/

// printing first 10 numbers
/*
#include<iostream>
using namespace std;
int main() {
    int n;
    cout << "enter the value of n : " ;
    cin >> n;
    for(int i=1 ; i<=n ; i++){
        cout << i << endl;
    }
    return 0;
} 
*/

// Fibonacci series 
/*
#include<iostream>
using namespace std;
int main () {
    int n;
    cout << "enter the value of n : " ;
    cin >> n;
    int a = 0;
    int b = 1;
    cout << a << " " << b << " " ;

    for(int i = 1 ; i <= n ; i++){
        int sum = a + b ;
        cout << sum << " ";
        a = b ;
        b = sum ;
    }

    return 0 ;
}
*/

