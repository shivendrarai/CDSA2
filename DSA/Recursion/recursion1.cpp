#include <iostream>
using namespace std;

void fun(int n){
    if(n>0){
        cout<<n<<endl;//desending
        fun(n-1);
        // cout<<n<<endl;ascending

    };
}

int main(){

    int x=3;
    fun(x);

    return 0;

}