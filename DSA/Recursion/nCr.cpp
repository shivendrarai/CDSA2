#include <iostream>

using namespace std;

int Rfact(int n){
    if(n==0){
        return 1;
    }
    return n*Rfact(n-1);
}

int nCr(int n,int r ){
    int a,b,c;
    a=Rfact(n);
    b=Rfact(r);
    c=Rfact(n-r);
    return a/(b*c);
}

int RnCr(int n,int r){
    if(n==r ||r==0){
        return 1;
    }
    return RnCr(n-1,r-1)+RnCr(n-1,r);
}


int main(){


cout<<RnCr(5,3);
}