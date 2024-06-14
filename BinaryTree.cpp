#include<iostream>
#include<bits/stdc++.h>
using namespace std ;

class node {
    public:
    int data ;
    node* left ;
    node* right ;

    node(int data){
        this -> data = data ;
        this -> left = NULL ;
        this -> right = NULL ;
    }

};

node* buildTree(node* root){
    int data ;
    cout << "Enter Data" << endl ;
    cin >> data ;

    root = new node(data) ;

    if(data == -1){
        return NULL ;
    }

    cout << "Enter data for left node " << data << endl ;
    root -> left = buildTree(root -> left) ;
    

    cout << "Enter data for right node " << data << endl ;
    root -> right = buildTree(root -> right) ;

    return root ;
}

void buildFromLevel(node* &root){
    int data ;
    cout << "Enter data " ;
    cin >> data ;
    root = new node(data);

    queue<node*>q ;
    q.push(root);

    while(!q.empty()){
        node* temp = q.front();
        q.pop();

        int leftData;
        cout << "Enter data for left of " << temp -> data  << endl ;
        cin >> leftData ;

        if(leftData != -1){
            temp -> left = new node(leftData);
            q.push(temp -> left);
        }

        int rightData ;
        cout << "Enter data for right of " << temp -> data <<  endl ;
        cin >> rightData ;

        if(rightData != -1){
            temp -> right = new node(rightData);
            q.push(temp -> right);
        }
    }
}


void levelOrderTraversal(node* root){
    queue<node*> q ;
    q.push(root);
    q.push(NULL);


    while(!q.empty()){
        node* temp = q.front() ;
        q.pop();

        if(temp == NULL){
            cout << endl ;

            if(!q.empty()){
                q.push(NULL);
            }
        }


        else{
            cout << temp -> data << " ";
            if(temp-> left){
                q.push(temp -> left);
            }
            if(temp -> right){
                q.push(temp -> right);
            }
        }
        
    }
}


void inOderTraversal(node* root){
    if(root == NULL){
        return ;
    }

    inOderTraversal(root -> left);
    cout << root -> data << " " ;
    inOderTraversal(root -> right);
}


void preOrderTraversal(node* root){
    if(root == NULL){
        return ;
    }

    cout << root -> data << " " ;
    preOrderTraversal(root -> left);
    preOrderTraversal(root -> right);
}


void postOrderTraversal(node* root){
    if(root == NULL){
        return ;
    }

    postOrderTraversal(root -> left);
    postOrderTraversal(root -> right);
    cout << root -> data << " " ;
}



int main(){
    node* root  = NULL;
    // root = buildTree(root);

    buildFromLevel(root);
    levelOrderTraversal(root);

    // 1 3 5 7 11 17 -1 -1 -1 -1 -1 -1 -1
    // cout << "level Order Traversal : " << endl ;
    // levelOrderTraversal(root);

    // cout << "IN ORDER TRAVERSAL " << endl ;
    // inOderTraversal(root) ;

    // cout << endl << "preOrderTraversal" << endl ;
    // preOrderTraversal(root);

    // cout << endl << "postOrderTraversal" << endl ;
    // postOrderTraversal(root);




}




