#include <iostream>
using namespace std;

// int Power(int m,int n){

//     if(n==0){

        
//         return 1;
//     }
//     else{
//         return Power(m,n-1)*m;
//     }
// }
int Power(int m,int n){

    if(n==0){

        
        return 1;
    }
    else if(n%2==0){
        return Power(m*m,n/2);
    }
    else{
        return m*Power(m*m,(n-1)/2);
    }
}


int main(){

    cout<<Power(5,4);
    return 0;

}