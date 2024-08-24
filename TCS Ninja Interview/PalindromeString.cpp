#include <iostream>
using namespace std;

int main() {
    string s ;
    cout << "Enter string " ;
    cin >> s ;
    int i = 0 , j = s.size() ;
    bool isPalindrome = true;
    while(i < j){
        if(s[i] != s[j]){
            isPalindrome = false;
            break;
        }
        i++;
        j--;
    }

    if(isPalindrome)
        cout << "It is a Palindrome" ;
    else
        cout << "It is NOT a Palindrome" ;
    
    
    return 0;
}
