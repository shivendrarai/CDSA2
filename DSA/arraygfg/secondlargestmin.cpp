#include<iostream>
using namespace std;

void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

int SecondLargest(int arr[], int n)
{
   int i, j;
   for (i = 0; i < 2; i++)     
    
       for (j = 0; j < n-i-1; j++)
           if (arr[j] > arr[j+1])
              swap(&arr[j], &arr[j+1]);
    
        
        
    return arr[n-2];
        
}

int SecondMin(int A[],int n){
    int i,j,minindex;
    for (int i = 0; i < 2; i++)  // Selection run 2 times for second min
    {   minindex=i;
        for (int j = i+1; j < n; j++)
        {
            if(A[minindex>A[j]]){
                minindex=j;
            }
        }
        swap(A[i],A[minindex]);
        
    }
    return A[1];
    
}
int Secondlar(int A[],int n){
    int res=-1,largest=0;
    for (int i = 1; i < n; i++)
    {
        if(A[i]>A[largest]){
            // largest=i;
            // res=i;
            res=largest;
            largest=i;
        }
        else if (A[i]!=A[largest]){
            if (res==-1 || A[i]>A[res])
            {
                res=i;
            }
            
            

        }

        
    }
    
    return A[res];
}

//above array should not have duplicate element
void Display(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}




int main(){

    int A[]={9,1,3,4,11,11,3,0};
    int n=sizeof(A)/sizeof(int);

    // cout<<SecondLargest(A,n);

    

    cout<<Secondlar(A,n);
    // Display(A,n);





}