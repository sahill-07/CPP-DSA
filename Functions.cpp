#include<iostream>
using namespace std;

int power(int a , int b) {
    int answer = 1;
    for(int i = 0 ; i < b ; i++){
        answer = answer * a;
    }
    return answer ;
}

int main() {
    int a , b ;
    cout << "Enter the number : " ;
    cin >> a ;
    cout << "Enter the power to the number : ";
    cin >> b ;
    cout << "The answer is " << power( a , b );
}