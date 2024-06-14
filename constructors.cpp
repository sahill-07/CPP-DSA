#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Hero{
    public:
    int health ;
    char level ;

    Hero(int health , char level){
        cout << "Constructor called !!" << endl;
        this -> health = health ;
        this -> level = level ;

        
    }
};

int main(){
    cout << "Calling the constructor ..." << endl ;
    Hero sahil(10, 'A');

    cout << "done" ;

}