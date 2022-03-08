#include<iostream>
using namespace std;

int main(){
    // int *p=new int[5];
    // p[0]=12;
    // p[1]=13;
    // cout<<p[1];
    // delete []p;
    // p=nullptr;
    // pointer arithmetic
    int A[5]={2,4,8,6,10};
    int *p=A;
    cout<<*p<<endl;
    p++;
    cout<<*p<<endl;
    p--;
    cout<<*p<<endl;
    cout<<*(p+2)<<endl;

    return 0;
}