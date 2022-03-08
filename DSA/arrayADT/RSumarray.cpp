#include <iostream>
using namespace std;

int Rsumarr(int A[],int i){
    if(i==0){
        return 0;
    }
    else{
        return Rsumarr(A,i-1)+A[i-1];
    }
}




int main()
{

    int A[]={1,2,3,4,5,6,7,8,9,11};
    cout<<Rsumarr(A,10);


    return 0;
}