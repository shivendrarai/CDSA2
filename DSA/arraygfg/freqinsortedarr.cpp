#include<iostream>
using namespace std;
#include <algorithm>
#include<vector>

vector<int> a;

void freq(int A[],int n){
    int count=1;
    for (int i = 0; i < n; i++)
    {
        if(A[i]==A[i+1]){
            count++;
        }
        else{
            a.push_back(count);
            cout<<A[i]<<" count  "<<count<<"\n";
            count=1;
        }
    }
    
}










int main(){

    // int A[]={1,1,1,2,4,4,4,4,5,5,5};
    int A[]={30,40};


    int n=sizeof(A)/sizeof(int);

    freq(A,n);

    for (int i = 0; i < a.size(); i++)
    {
        cout<<a[i]<<endl;
    }
    

}