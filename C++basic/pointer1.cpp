#include<iostream>
using namespace std;

int main(){
    int x=100;
    int *p;//declartion
    p=&x;//initliztion
    cout<<x<<endl;
    cout<<&x<<endl;
    cout<<p<<endl;
    cout<<&p<<endl;//pointer location
    cout<<*p<<endl;//dereferencing
    return 0;
}