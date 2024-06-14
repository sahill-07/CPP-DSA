#include<iostream>
#include<bits/stdc++.h>
using namespace std ;

class Stack {
    public :
    int top ;
    int *arr ;
    int size ;

    Stack(int size){
        this -> size = size ;
        arr = new int[size] ;
        top = -1 ;
    }

    void push(int element){
        if(size - top > 1){
            top++ ;
            arr[top] = element ;
        }
        else{
            cout << "Stack overflow" << endl ;
        }
    }

    void pop(){
        if(top >= 0){
            top-- ;
        }
        else{
            cout << "No elements to pop" << endl ;
        }
    }

    int peek(){
        if(top >= 0 && top < size){
            return arr[top];
        }
    }

    bool isEmpty(){
        if(top == -1){
            return true ;
        }
        return false ;
    }
};


int main(){

  Stack st(5) ;


}