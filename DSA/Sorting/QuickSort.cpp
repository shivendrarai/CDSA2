#include <stdio.h>
 
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}


void Display(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
 

int partition(int A[],int l,int h){
    int pivot=A[l];
    int i=l,j=h;

    do
    {
        do
        {
            i++;
        } while (A[i]<=pivot);
        do
        {
            j--;
        } while (A[j]>pivot);
        if(i<j){
            swap(&A[i],&A[j]);
        }
        
        
    } while (i<j);
    swap(&A[l],&A[j]);
    return j;
    
} 
void QuickSort(int A[],int l,int h){
    int j;
    if(l<h){
        j=partition(A,l,h);
        QuickSort(A,l,j);
        QuickSort(A,j+1,h);
    }
}



int main()
{
    int A[] = {10,5,4,7,3,8,6,9,600};
    int n = sizeof(A)/sizeof(A[0]);
    QuickSort(A,0,n-1);

    printf("Array sorted in acending order: \n");
    Display(A, n);
    return 0;
}