/*
#include<iostream>
using namespace std;
int main () {
    int number ;
    bool isPrime = true;
    cout << "Enter a number : " ;
    cin >> number ;
     for (int i = 2 ; i < number ; i++ ){
        if(number % i == 0){
            isPrime = false;
            break;
        }
    }

    if(isPrime){
        cout << number << " is a prime number" ;
    }
    else{
        cout << number << " is not a prime number" ;
    }
}
*/

// --------------------------------------------------------------------------------------------------------------------

/*
#include<iostream>
using namespace std;
int main(){
    int product =1 ;
    int sum =0 ;
    int number ;
    cout << "Enter the number : " ;
    cin >> number ;
    int tno = number;
    while(number!=0){
        int  digit ;
        digit = number%10;
        product = product * digit ;
        sum = sum + digit ;
        number = number/10;
    }

    cout << product - sum  << endl ;
}
*/


// -------------------------------------------------------------------------------------------------------------------------


//Reverse number
/*
#include<iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the number n : ";
    cin >> n ;
    int reverse=0;
    while(n!=0){
        int digit = n%10;
        n = n/10;
        reverse = digit + reverse*10;
    }

    cout << reverse << endl;
    return 0;
}
*/