// Insert at the bottom of the stack  


#include<iostream>
#include<bits/stdc++.h>
using namespace std ;
void solve(stack<int>s , int data){
    if(s.empty()){
        s.push(data);
        return ;
    }

    int val = s.top();
    s.pop();

    solve(s , data);

    s.push(val);
}
int main(){
    stack<int>s ;
    int x ;
    cin >> x ;
    solve(s , x);
}