#include<iostream>
#include<bits/stdc++.h>
using namespace std ;

class Node {
    public :
    int data ;
    Node* next;

    Node(int data){
        this -> data = data ;
        this -> next = NULL ;
    }
};

void insertAtHead(Node* &Head , int data ){
    Node* temp = new Node(data);
    temp -> next = Head ;
    Head = temp ;
}

void insertAtTail(Node* &tail , int data){
    Node* temp = new Node(data);
    tail -> next = temp ;
    tail = temp ;
}

void print(Node* &Head){
    Node* temp = Head ;
    while(temp != NULL){
        cout << temp -> data << " " ;
        temp = temp -> next ;
    }
    cout << endl ;
}

int main(){
    Node* node1 = new Node(10); 

    Node* Head = node1 ;
    Node* tail = node1 ;
    // print(Head);

    // insertAtHead(Head , 12);
    // print(Head);

    // insertAtHead(Head , 15);
    // print(Head);

    print(Head);
    insertAtTail(tail , 12);
    print(Head);
    insertAtTail(tail , 15);
    print(Head);
}