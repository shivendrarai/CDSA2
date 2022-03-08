#include <iostream>
#include <cmath>
using namespace std;

int main()
{  
    int n,z;
    int k;
    cin>>n;
    z=n;
    while(n){
        n=n/2;
        k++;
    }
    k=pow(2,k)-1;
    // cout<<k;
    n=k-z;
    cout<<n;
    

    return 0;
}