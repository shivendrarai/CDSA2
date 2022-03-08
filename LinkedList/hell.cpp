
#include <iostream>
using namespace std;

int magicNumber(int n) {
    if(n/10==0){
        return n;
    }
    else{
            
        n=n/10+n%10;
        magicNumber(n);
    }

}
int main(){

    cout<<magicNumber(928435);

}