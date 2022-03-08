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


int lsearch(struct Array *arr,int key){
    int i;
    for(i=0;i<arr->length;i++){
        if(key==arr->A[i]){
            swap(&arr->A[i],&arr->A[0]);
            return i;
        }
    }
    return -1;
}




int main(){
    int n,i;
    struct Array arr={{2,3,4,5,6},10,5};


    cout<<lsearch(&arr,6);
    cout<<lsearch(&arr,2);
    
    // display(arr);
    return 0;

}