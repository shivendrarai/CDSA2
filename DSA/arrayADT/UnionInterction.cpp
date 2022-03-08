#include <iostream>
using namespace std;



struct Array{
    int A[10];
    int size;
    int length;
};
void display(struct Array arr){
    int i;
    for(i=0;i<arr.length;i++){
        cout<<arr.A[i]<<" ";
    }
}

struct Array* merge(struct Array *arr1,struct Array *arr2){
    int i,j,k;
    i=j=k=0;
    // struct Array *arr3=new int[10];
    struct Array *arr3;
    arr3=new Array;
    while(i<arr1->length && j<arr2->length){
        if(arr1->A[i]<arr2->A[j]){
            arr3->A[k++]=arr1->A[i++];

        }
        else{
            arr3->A[k++]=arr2->A[j++];
        }

    }
    for(;i<arr1->length;i++){
        arr3->A[k++]=arr1->A[i++];
    }
        for(;j<arr1->length;j++){
        arr3->A[k++]=arr1->A[j++];
    }
    arr3->length=arr1->length+arr2->length;
    arr3->size=10;
    return arr3;
}



struct Array* Union(struct Array *arr1,struct Array *arr2){
    int i,j,k;
    i=j=k=0;
    // struct Array *arr3=new int[10];
    struct Array *arr3;
    arr3=new Array;
    while(i<arr1->length && j<arr1->length){
        if(arr1->A[i]<arr2->A[j]){
            arr3->A[k++]=arr1->A[i++];

        }
        else if(arr1->A[i]>arr2->A[j]){
            arr3->A[k++]=arr2->A[j++];
        }
        else{
            arr3->A[k++]=arr2->A[j++];
            i++;

        }

    }
    for(;i<arr1->length;i++){
        arr3->A[k++]=arr1->A[i++];
    }
        for(;j<arr1->length;j++){
        arr3->A[k++]=arr1->A[j++];
    }
    arr3->length=k;
    arr3->size=10;
    return arr3;
}





// struct Array* Intersection(struct Array *arr1,struct Array *arr2){
//     int i,j,k;
//     i=j=k=0;
//     // struct Array *arr3=new int[10];
//     struct Array *arr3;
//     arr3=new Array;
//     while(i<arr1->length && j<arr1->length){
//         if(arr1->A[i]<arr2->A[j]){
//             i++;

//         }
//         else if(arr1->A[i]>arr2->A[j]){
//             j++;
//         }
//         else if(arr1->A[i]==arr2->A[j])
//         {
//             arr3->A[k++]=arr2->A[j++];
//             i++;

//         }

//     }

//     arr3->length=k;
//     arr3->size=10;
//     return arr3;
// }

struct Array* Intersection(struct Array *arr1,struct Array *arr2){
    int i,j,k;
    i=j=k=0;
    // struct Array *arr3=new int[10];
    struct Array *arr3;
    arr3=new Array;
    while(i<arr1->length && j<arr1->length){
        if(arr1->A[i]<arr2->A[j]){
            i++;

        }
        else if(arr1->A[i]>arr2->A[j]){
            j++;
        }
        else if(arr1->A[i]==arr2->A[j])
        {
            arr3->A[k++]=arr2->A[j++];
            i++;

        }

    }

    arr3->length=k;
    arr3->size=10;
    return arr3;
}

struct Array* Diffrence(struct Array *arr1,struct Array *arr2){
    int i,j,k;
    i=j=k=0;
    // struct Array *arr3=new int[10];
    struct Array *arr3;
    arr3=new Array;
    while(i<arr1->length && j<arr1->length){
        if(arr1->A[i]<arr2->A[j]){
            arr3->A[k++]=arr2->A[i++];
        

        }
        else if(arr1->A[i]>arr2->A[j]){
            j++;
        }
        else
        {
            j++;  
            i++;

        }

    }
        for(;i<arr1->length;i++){
        arr3->A[k++]=arr1->A[i++];
    }

    arr3->length=k;
    arr3->size=10;
    return arr3;
}



int main(){
    // cout<<"hello";
    struct Array arr1={{2,6,10,15,25},10,5};
    struct Array arr2={{2,6,7,15,20},10,5};
    struct Array *arr3;

    arr3=merge(&arr1,&arr2);
    

    display(*arr3);
    

    return 0;

}