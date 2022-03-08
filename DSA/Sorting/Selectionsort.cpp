#include <stdio.h>
 
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void selectionSort(int arr[], int n)
{
    int i, j, min_index;
 
    for (i = 0; i < n-1; i++)
    {
        min_index = i;
        for (j = i+1; j < n; j++){
            if (arr[j] < arr[min_index])
                min_index = j;
 
        }
        swap(&arr[min_index], &arr[i]);

    }
} 
void bubbleSort(int arr[], int n)
{
   int i, j;
   for (i = 0; i < n-1; i++)     
 
       for (j = 0; j < n-i-1; j++)
           if (arr[j] > arr[j+1])
              swap(&arr[j], &arr[j+1]);
}

void insertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;
 

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}
  
void Display(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
 

int main()
{
    int A[] = {45, 23,89, 20, 67, 22, 19, 10, 60, 24, 90, 76, 52, 4, 98, 56};
    int n = sizeof(A)/sizeof(A[0]);
    // selectionSort(A,n);
    bubbleSort(A, n);
    // insertionSort(A,n);
    printf("Array sorted in acending order: \n");
    Display(A, n);
    return 0;
}


//    int i, j;
//    for (i = 0;  i<limit-1; i++)     
 
//        for (j = 0; j < limit-i-1; j++)
//            if (obj[j].id > obj[j+1].id){
//                 temp= obj[i];

//                 obj[i]=obj[j];

//                 obj[j]= temp;
//            }
              

//     //Loop to print the output

//     for(i=0; i<limit; i++)

//     {

//         printf("\n Student Name:%s",obj[i].Name);

//         printf("\n Student ID:%d",obj[i].id);

//         printf("\n Student age:%d",obj[i].age);

//     }
