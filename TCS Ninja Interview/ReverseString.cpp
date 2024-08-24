#include <iostream>
using namespace std;

int main() {
    string s ;
    cout << "Enter string " ;
    s = "Hello, World!" ;

    int i = 0 , j = s.size() - 1 ;
    while(i < j){
        swap(s[i] , s[j]);
        i++ ; j--;
    }

    cout << " reversed string " << s ; 

    
    
    return 0;
}