#include <iostream>
using namespace std;
struct Array{
    int A[10];
    int size;
    int length;
};
void swap(int *x,int *y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
void display(struct Array arr){
    int i;
    for(i=0;i<arr.length;i++){
        cout<<arr.A[i]<<" ";
    }
}

void Sortedinsert(struct Array *arr,int n){
    int i=arr->length-1;
    arr->A[arr->length]=n;
    if(arr->length<arr->size){
        // for(i=arr->length;i>0;i--){
        //     if(arr->A[i-1]>n){
        //         swap(arr->A[i],arr->A[i-1]);
        //     }
        // }
        while(arr->A[i]>n){
            swap(arr->A[i+1],arr->A[i]);
            i--;

        }   
        arr->A[i+1]=n; 


    }
    arr->length++;

}


bool IsSorted(struct Array arr){
    for(int i=0;i<arr.length-1;i++){
        if(arr.A[i]>arr.A[i+1]){
            return false;
        }
    }
    cout<<"true";
    return true;
}

void Rearrange(struct Array *arr){
    int i=0;
    int j=arr->length-1;
    while(i<j){
        while(arr->A[i]<0){
            i++;
        }
        while(arr->A[j]>0){
            j--;
        }
        if(i<j){
            swap(&arr->A[i],&arr->A[j]);
        }
    }
}



int main(){
    int n,i;
    struct Array arr={{2,-3,4,5,-7,8,9},10,7};

    // Sortedinsert(&arr,6);
    // IsSorted(arr);
    Rearrange(&arr);
    display(arr);
    return 0;

}