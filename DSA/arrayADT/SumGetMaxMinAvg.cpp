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

int Get(struct Array arr,int index){
    if(index>=0 && index<arr.length){
        return arr.A[index];
    }
    return -1;
}

int Set(struct Array *arr,int index,int x){
    if(index>=0 && index<arr->length){
        arr->A[index]=x;
    }
    return arr->A[index];
    
}

int Max(struct Array arr){
    int max=arr.A[0],k;
    for(int i=1;i<arr.length;i++){
        if(arr.A[i]>max){
            max=arr.A[i];
            k=i;
        }
    }
    return max;
    
}
int secMax(struct Array arr){
    int max=INT_MIN,sec=INT_MIN;
    for(int i=1;i<arr.length;i++){
        if(arr.A[i]>max){
            sec=max;
            max=arr.A[i];
            
        }
        else if(arr.A[i]<max && arr.A[i]>sec){
            sec=arr.A[i];

        }
    }
    return sec;
    
}



int Min(struct Array arr){
    int min=arr.A[0];
    for(int i=1;i<arr.length;i++){
        if(arr.A[i]<min){
            min=arr.A[i];
        }
    }
    return min;
    
}

int Secmin(struct Array arr){
    int Fmin=INT_MAX;
    int Smin=INT_MAX;
    for (int i = 0; i < arr.length; i++)
    {
        if(arr.A[i]<Fmin){
            Smin=Fmin;
            Fmin=arr.A[i];
        }
        else if (arr.A[i]>Fmin && arr.A[i]<Smin)
        {
            Smin=arr.A[i];
        }
        
    }
    
    return Smin;


}

int Sum(struct Array arr){
    int Sum=0;
    for(int i=1;i<arr.length;i++){
        Sum+=arr.A[i];
    }
    return Sum;
    
}
float Avg(struct Array arr){

    return (float)Sum(arr)/arr.length;
    
}


int main(){
    int n,i;
    struct Array arr={{2,3,4,5,6},10,5};
    
    cout<<"get  "<<Get(arr,3)<<endl;
    cout<<"set  "<<Set(&arr,3,101)<<endl;
    cout<<"max  "<<Max(arr)<<endl;
    cout<<"min  "<<Min(arr)<<endl;
    cout<<"sum  "<<Sum(arr)<<endl;
    cout<<"avg  "<<Avg(arr)<<endl;
    cout<<"secLargest  "<<secMax(arr)<<endl;
    cout<<"Secmin   "<<Secmin(arr);





    // display(arr);
    return 0;

}