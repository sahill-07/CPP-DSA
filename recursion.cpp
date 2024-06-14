// factorial using recursion 

/*
#include<iostream>                                                  
#include<bits/stdc++.h>                                            
using namespace std ;                                               
                                                                    
int factorial(int n){

    if(n==0)
        return 1 ;
    int smallerProblem = factorial(n-1);
    return n*smallerProblem;
}
int main () {
    int n ;
    cout << "enter the number you want the factorial of : " ;
    cin >> n ;

    cout << factorial(n) << endl ;
    return 0;
}
*/

// Two to the power n using recursion 
/*
#include<iostream>
#include<bits/stdc++.h>
using namespace std ;

int power(int n){
    if(n == 0){
        return 1 ;
    }
    int smallerProblem = power(n-1);
    return 2*smallerProblem ; 
}

int main(){
    int n ;
    cin >> n ;
    cout << power(n) << endl ;
}
*/

// Printing n number using recursion 

#include<iostream>
#include<bits/stdc++.h>
using namespace std ;

void print(int n){
    if(n == 0)
        return ;
    cout << n << endl ;
    return print(n-1);
    cout << n << endl ;
}

int main (){
    int n ;
    cin >> n ;

    print(n) ; 
} 