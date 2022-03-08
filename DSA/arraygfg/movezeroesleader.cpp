#include<iostream>
using namespace std;
#include <algorithm>
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

void moveZeroes(int A[],int n){
    int count=0;
    for (int i = 0; i < n; i++)
    {
        if(A[i]!=0){
            swap(A[i],A[count]);
            count++;

        }
    }
    

}
void leader(int A[],int n){
    int curr_leader=A[n-1];
    cout<<curr_leader<<" ";
    for (int i = n-2; i >=0; i--)
    {
        if (A[i]>curr_leader)
        {
            curr_leader=A[i];
            cout<<A[i]<<" ";
        }
        
        
    }
    
}
int maxDiff(int A[],int n){
    int res=A[1]-A[0];
    int min_value=A[0];
    for (int i = 0; i < n; i++)
    {
        res=max(res,A[i]-min_value);
        min_value=min(min_value,A[i]);
        
    }
    return res;
    
}

void Display(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main(){

    // int A[]={1,0,8,3,8,0,5,0};
    int A[]={2,3,9,6,4,8,1};
    int n=sizeof(A)/sizeof(int);

    
    // moveZeroes(A,n);
    
    // leader(A,n);

    // Display(A,n);

    cout<<maxDiff(A,n);

    

}