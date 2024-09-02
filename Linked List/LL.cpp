#include<iostream>
#include<bits/stdc++.h>
using namespace std ;
class Node{
    public:
        int data ;
        Node* next ;
    
    Node(int data , Node* next){
        this -> data = data ;
        this -> next = next ;
    }

    Node(int data){
        this -> data = data;
        this -> next = nullptr;
    }

};

int main(){
    Node* y = new Node(10);
    cout << y-> data ;
}