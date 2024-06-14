#include<iostream>
#include<bits/stdc++.h>
using namespace std ;

class Hero{
    private :
    int health ;

    public:
    int getHealth(){
        return health ;
    }

    void setHealth(int h){
        health = h ;
    }
};

int main(){
    Hero spman ;
    spman.setHealth(10);
    cout << spman.getHealth();

    Hero* batman = new Hero ;

    batman -> setHealth(70);
    cout << "\n" << batman ->getHealth() << endl;

}
