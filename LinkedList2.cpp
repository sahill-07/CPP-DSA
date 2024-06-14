#include<iostream>
#include<bits/stdc++.h>
using namespace std ;

class Node{
    public:
    int data ;
    Node* next ;

    Node(int data){
        this -> data = data ;
        this -> next = NULL ;
    }  
};

void InsertAtHead(Node* &head , int data){
    Node* temp = new Node(data);
    temp -> next = head ;
    head = temp ;
}

void InsetAtTail(Node* &tail , int data){
    Node* temp = new Node(data);
    tail -> next = temp ;
    tail = temp ;
}

void InsertAtPosition(Node* &tail , Node* &head , int position , int data ){
   Node* temp = head ;
   int count = 1 ;

    if(position == 1){
    InsertAtHead(head , data);
    return;
   }
   if(temp -> next == NULL){
    InsetAtTail(tail , data);
   }

   while(count < position -1){
        temp = temp -> next ;
        count++ ;
   }

   Node* insert = new Node(data);
   insert -> next = temp -> next;
   temp -> next = insert ;

}

void DeleteNode(Node* head , int position ){
    Node* currentNode = head ;
    int count = 1 ;
    while(count < position){
        
        count++;
    }

}

void print(Node* &head){
    Node* temp = head ;
    while(temp != NULL){
        cout << temp -> data << " ";
        temp = temp -> next ;
    }
    cout << endl ;
}

int main(){
    Node* node1 = new Node(10);
    Node* head = node1 ;
    Node* tail = node1 ;

    // InsertAtHead(head , 9);
    InsetAtTail(tail , 12);
    InsetAtTail(tail , 15);
    InsetAtTail(tail , 20);
    // print(head);

    InsertAtPosition(tail , head , 1 , 9);
    print(head);
}


// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;

// class Node{
//     public:
//     int data;
//     Node* next;

//     Node(int data){
//         this -> data = data ;
//         this -> next = NULL ;
//     }

//     void insertAtHead(Node* &head , int data){
//         Node* temp = new Node(data);
//         temp -> next = head ;
//         head = temp ;
//     }

//     void insertAtTail(Node* &tail , int data){
//         Node* temp = new Node(data);
//         tail -> next = temp ;
//         temp = tail ;
//     }

//     void print(Node* &head){
//         Node* temp = head ;

//         while(temp != NULL){
//             cout << temp -> data << " " ;
//             temp = temp -> next ;            
//         }

//         cout << endl ;

//     }

// };

// void insertAtHead(Node* &head , int data){
//         Node* temp = new Node(data);
//         temp -> next = head ;
//         head = temp ;
//     }

//     void insertAtTail(Node* &tail , int data){
//         Node* temp = new Node(data);
//         tail -> next = temp ;
//         temp = tail ;
//     }

//     void print(Node* &head){
//         Node* temp = head ;

//         while(temp != NULL){
//             cout << temp -> data << " " ;
//             temp = temp -> next ;            
//         }

//         cout << endl ;

//     }

// int main(){
//     Node* node1 = new Node(10);
    
//     Node* head = node1;
//     Node* tail = node1;
//     // print(tail);
//     // insertAtHead(head , 12);
//     // insertAtHead(head , 15);

//     print(head);

//     insertAtTail(tail , 12);
//     print(head);
//     insertAtTail(tail , 15);
//     print(head);
// }