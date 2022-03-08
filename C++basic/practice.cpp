#include<iostream>
using namespace std;

int main(){
    int a=0,b=0,c;
    cin>>c;
    int A[c];
    for(int i=0;i<c;i++){
        cin>>a>>b;
        A[i]=a+b;
        
    }
    for(int i=0;i<c;i++){
        
        cout<<A[i]<<endl;
        
    }

    return 0;
}