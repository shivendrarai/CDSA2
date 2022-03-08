#include <iostream>
using namespace std;

int main(){


    int *p;
    p=new int[5];
    p[0]=1;
    p[1]=3;
    p[2]=5;
    p[3]=7;
    p[4]=8;
    p[5]=9;
    for(int i=0;i<5;i++){
        cout<<p[i]<<endl;
        cout<<i[p]<<endl;
        cout<<*(p+i)<<endl;


    }
    return 0;

}