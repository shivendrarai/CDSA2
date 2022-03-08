#include <iostream>
using namespace std;

struct Array{
    int *A;
    int size;
    int length;
};
void display(struct Array arr){
    int i;
    for(i=0;i<arr.length;i++){
        cout<<arr.A[i]<<" ";
    }
}

int main(){
    int n,i;
    struct Array arr;
    cout<<"Enter size of array";
    cin>>arr.size;
    arr.A=new int[arr.size];
    arr.length=0;

    cout<<"Enter the no of elements";
    cin>>n;

    cout<<"Enter all the elements";
    for(i=0;i<n;i++){
        cin>>arr.A[i];

    }
    arr.length=n;

    
    display(arr);
    return 0;

}