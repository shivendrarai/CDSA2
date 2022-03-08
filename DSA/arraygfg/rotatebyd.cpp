#include <iostream>
using namespace std;

void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}






void reverse(int A[],int low, int high){

    while (low<high)
    {
        swap(A[low],A[high]);
        low++;
        high--;
    }
    

}

void Rotatebyd(int A[],int d,int n){
    reverse(A,0,d-1);
    reverse(A,d,n-1);
    reverse(A,0,n-1);
}

void Display(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}




int main(){

    int A[]={1,2,3,4,5,6,7};
    int n=sizeof(A)/sizeof(int);

    Rotatebyd(A,3,n);
    Display(A,n);

}