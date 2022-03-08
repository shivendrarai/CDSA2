#include <iostream>
using namespace std;


//horners rule
double sin(int x, int n){
    static double s=1;
    int i;
    if(n%2==0){
        i=-1;
    }
    else
    {
        i=1;
    }
    
    
    if(n==0){
        s*=x;
        return s;
    }

    
    s=1*i+(x*x*s)/(2*n*(2*n+1));
    return sin(x,n-1);
    


}
int main(){
    cout<<sin(3,20);
    return 0;

}