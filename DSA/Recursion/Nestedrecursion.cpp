#include <iostream>
using namespace std;

int fun(int n){
    if(n>100){
        return n-10;

    }
    return fun(fun(n+11));
}

int main(){
    // cout<<"hello";
    int r;
    r=fun(67);
    cout<<r;
    return 0;

}