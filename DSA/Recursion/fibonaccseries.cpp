#include <iostream>

using namespace std;


int rfib(int n){
    if(n<=1){
        return n;
    }
    return rfib(n-1)+rfib(n-2);
}
int mfib(int F[],int n){
    if(n<=1){
        F[n]=n;
        return n;
    }
    else{
        if( F[n-2]==-1){
            F[n-2]=mfib(F,n-2);
        }
        if(F[n-1]==-1){
            F[n-1]=mfib(F,n-1);
        }
        return F[n-2]+F[n-1];
    }
}


int main(){
    int n;
    cin>>n;
    int F[n];
    for(int i=0;i<n;i++){
        F[i]=-1;
        // cout<<F[i];
    }
    
    
    cout<<mfib(F,n);


    // cout<<rfib(3);

}

