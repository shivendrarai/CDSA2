#include <iostream>
using namespace std;

// int Rsumarr(int A[],int i){
//     if(i==0){
//         return 0;
//     }
//     else{
//         return Rsumarr(A,i-1)+A[i-1];
//     }
// }




// int main()
// {

//     int A[]={1,2,3,4,5,6,7,8,9,11};
//     // cout<<Rsumarr(A,10);


//     return 0;
// }

int remDups(int arr[],int n){
    int res=1;
    for (int i = 0; i < n-1; i++)
    {
        if(arr[i]!=arr[i+1]){
            arr[res]=arr[i+1];
            res++;
        }
    }
    return res;
    
}



int main() {
	
      int arr[] = {10, 20, 20, 30, 30, 30,40,50,50}, n = 9;

      cout<<"Before Removal"<<endl;

       for(int i = 0; i < n; i++)
       {
       		cout<<arr[i]<<" ";
       }

       cout<<endl;

       n = remDups(arr, n);

       cout<<"After Removal"<<endl;

       for(int i = 0; i < n; i++)
       {
       		cout<<arr[i]<<" ";
       }
    
}