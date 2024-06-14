/*
Pattern 1 
A A A A A
B B B B B
C C C C C
D D D D D
E E E E E
*/

/*
#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter a number n : " ;
    cin >> n;
    for( int i=1 ; i <=n ; i++){
        
        for (int j=1 ; j <= n ; j++){
            char ch = 'A' + i - 1;
            cout << ch << " " ;
        }
        cout << endl;
    }
    return 0;
}
*/

//----------------------------------------------------------------------------------------

/*
Pattern 2
A B C D E
A B C D E
A B C D E
A B C D E
A B C D E
*/

/*
#include<iostream>
using namespace std;
int main (){
    int n;
    cout << "Enter a number n :";
    cin >> n ;
    for (int i = 1 ; i <= n ; i++){
        for(int j=1 ; j <= n ; j++){
            char ch = 'A' + j - 1 ;
            cout << ch << " ";

        }
        cout << endl ;
    }
    return 0;
} 
*/

/*
Pattern 3
A B C D E 
B C D E F
C D E F G
D E F G H
E F G H I
*/

/*
#include<iostream>
using namespace std;
int main (){
    int n;
    cout << "enter a number n " ;
    cin >> n;
    for (int i = 1 ; i <= n ; i++){
        for (int j = 1 ; j <=n ; j++){
            char ch = 'A' + i + j - 2 ;
            cout << ch << " " ;
        }
        cout << endl;
    }
    return 0;
}
*/

//------------------------------------------------------------------------------------------

/*
Pattern 4
A 
B B
C C C
D D D D
E E E E E
*/

/*
#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter a number n : " ;
    cin >> n ;

    for ( int i = 1 ; i <=n ; i ++){
        char ch = 'A' + i - 1;
        for (int j = 0 ; j < i ; j++ ){
            cout << ch << " " ;

        }
        cout << endl;
    }
    return 0;
}
*/
//-----------------------------------------------------------------------------------------

/*
Pattern 5

*/

/*
#include<iostream>
using namespace std;
int main() {
    int n ;
    cout << "Enter a number n ";
    cin  >> n ;
    for(int i=1 ; i <= n ; i++){
        for( int j = 1 ; j < i ; j++){
            char ch = 'A';
            cout << ch << " ";
            ch++ ;
        }
        cout << endl;
    }
    return 0 ;
}
*/

//------------------------------------------------------------------------------------------
/*
Pattern 6
A 
B C
C D E
D E F G
E F G H I
*/

/*
#include<iostream>
using namespace std;
int main(){
    int n ;
    cout << "Enter a number n : ";
    cin >> n ;
    for(int i =1 ; i <=n ; i++){
        char value = 'A' + i - 1;
        for (int j =1 ; j <= i ; j++ ){
            cout << value << " ";
            value++;
        }
        cout << endl;
    }
    return 0 ;
}
*/
//------------------------------------------------------------------------------------------
/*
Pattern 7
E 
D E
C D E
B C D E
A B C D E
*/

/*
#include<iostream>
using namespace std;
int main() {
    int n ;
    cout << "Enter a number n : ";
    cin >> n ;
    for(int i=1 ; i <= n ; i++){
        char ch = 'A' + n - i;
        for (int j=1 ; j <=i ; j ++){
            cout << ch << " " ;
            ch++;
        }
        cout << endl;
    }
    return 0;
}
*/
//------------------------------------------------------------------------------------------
/*
Pattern 8
        * 
      * *
    * * *
  * * * *
* * * * *
*/

/*
#include<iostream>
using namespace std;
int main() {
    int n ;
    cout << "Enter a number n : " ;
    cin >> n;
    for (int i=1 ; i <= n ; i++){
        int space = n - i ;
        while(space>0){
            cout << " " << " " ;
            space--;
        }

        int j = 1 ;
        while (j <= i){
            cout << "*" << " ";
            j++;
        }
        cout << endl;
    }
}
*/

