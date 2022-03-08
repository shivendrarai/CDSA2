#include <iostream>
using namespace std;
struct Array{
    int A[10];
    int size;
    int length;
};

int BinarySearch(struct Array arr,int key){
    int l,mid,h;
    l=0;
    h=arr.length;
    while (l<=h)
    {
        mid=(l+h)/2;
        if(key==arr.A[mid]){
            return mid;
        }
        if(key>arr.A[mid]){
            l=mid+1;
        }
        else
        {
            h=mid-1;
        }
        
    }
    return -1;
}
int Rbinsearch(int a[],int l,int h, int key ){
    int mid;
    if(l<=h){
        mid=(l+h)/2;
        if(key==a[mid]){
            return mid;
        }
        else if(key>a[mid]){
            return Rbinsearch(a,mid+1,h,key);
        }
        else{
            return Rbinsearch(a,l,mid-1,key); 
        }
    }
}





int main(){
    int n,i;
    struct Array arr={{2,3,4,5,6,7},10,6};

    cout<<BinarySearch(arr,4)<<endl;
    // cout<<Rbinsearch(arr.A,0,arr.length,4);

    // display(arr);
    return 0;

}