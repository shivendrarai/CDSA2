#include <iostream>
using namespace std;

struct Queue{
    int *Q;
    int front;
    int rear;
    int size;
};

void enqueue(struct Queue *q,int x){
    if((q->rear+1)%q->size==q->front){
        cout<<"q is full";
    }
    else{
        q->rear=(q->rear+1)%q->size;
        q->Q[q->rear]=x;
    }
}
int deque(struct Queue *q){
    int x=-1;
    if(q->rear==q->front){
        cout<<"q is empty";
    }
    else{
        q->front++;
        x=q->Q[q->front];
    }
    return x;
}

void Display( struct Queue q ){
    int i=q.front+1;
   do{
       cout<<q.Q[i]<<" ";
       i=(i+1)%q.size;
   }while(i!=(q.rear+1)%q.size);  
    
}




int main(){
    struct Queue q;
    cout<<"enter the size";
    cin>>q.size;
    // q.Q=new int[q.size*sizeof(int)];
    q.Q=(int *)malloc(q.size*sizeof(int));
    q.front=q.rear=0;



    enqueue(&q,10);
    enqueue(&q,20);
    enqueue(&q,30);
    enqueue(&q,40);
    enqueue(&q,50);
    


    Display(q);




}