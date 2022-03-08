#include <iostream>
using namespace std;

int main(){


    int *p,*q;
    p=new int[5];
    p[0]=1;
    p[1]=3;
    p[2]=5;
    p[3]=7;
    p[4]=8;
    p[5]=9;
    q=new int[10]; 
    for(int i=0;i<5;i++){
        q[i]=p[i];

        

        // cout<<i;


    }
    delete []p;
    p=q;
    delete []q;
    q=nullptr;
    for(int i=0;i<10;i++){
        cout<<p[i];


    }
    return 0;

}