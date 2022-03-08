#include<stdio.h>
#include <stdlib.h>

int min(int a,int b){
    if(a<b)return a;
    return b;
}



void mergeArray(int a[],int low,int mid,int high){
    int size1=mid-low+1;
    int size2=high-mid;
    int leftArr[size1],rightArr[size2];
    for(int i=0;i<size1;i++){
        leftArr[i]=a[low+i];
    }
    for(int i=0;i<size2;i++){
        rightArr[i]=a[mid+1+i];
    }
    int i=0,j=0,k=low;
    while(i<size1 && j<size2){
        if(leftArr[i]<rightArr[j]){
            a[k++]=leftArr[i++];
        }
        else{
            a[k++]=rightArr[j++];
        }
    }
    while(i<size1){
        a[k++]=leftArr[i++];
    }
    while(j<size2){
        a[k++]=rightArr[j++];
    }
}


void mergeSort(int a[],int size){
 int step=0;
   printf("\nstep %d: ",step++);
   for(int i=0;i<size;i++){
     printf("%d ",a[i]);
   }
 for(int k=1;k<size;k*=2){
   for(int l=0;l<size-1;l+=2*k){
       int middleIndex=min(l+k-1,size-1);
       int r=min(l+2*k-1,size-1);
       mergeArray(a,l,middleIndex,r);
   }
   printf("\n %d step: ",step++);
   for(int i=0;i<size;i++){
     printf("%d ",a[i]);
   }
   }
}



int main()
{
    
    int a[]={3,41,52,26,38,57,9,49,8,15,72};
    
    int n=sizeof(a)/sizeof(int);
    mergeSort(a,n);
    return 0;
}
