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

void Reverse(struct Array *arr,int start,int end){
    int i,j,temp;
    // for(i=0,j=arr->length-1;i<arr->length;i++,j--){
    //     if(i<=j){
    //         temp=arr->A[i];
    //         arr->A[i]=arr->A[j];
    //         arr->A[j]=temp;

    //     }
    // }
    i=start;
    j=end;
    while(i<j){
        temp=arr->A[i];
        arr->A[i]=arr->A[j];
        arr->A[j]=temp;
        i++;
        j--;
    }
}
void Leftshift(struct Array *arr){
    int i,s;
    s=arr->A[0];
    for(int i=0;i<arr->length-1;i++){
        swap(&arr->A[i],&arr->A[i+1]);
    }
    arr->A[arr->length-1]=s;
}


void Rotatebyd(struct Array *arr,int d){

    Reverse(arr,0,d-1);
    Reverse(arr,d,arr->length-1);
    Reverse(arr,0,arr->length-1);


}

int main(){
    int n,i;
    struct Array arr={{2,3,4,5,6,7,8},10,7};


    // Reverse(&arr,0,arr.length-1);
    // Leftshift(&arr);

    Rotatebyd(&arr,3);


    display(arr);
    return 0;

}