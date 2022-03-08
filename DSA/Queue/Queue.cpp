#include <iostream>
using namespace std;

struct Queue{
    int *Q;
    int front;
    int rear;
    int size;
};

void enqueue(struct Queue *q,int x){
    if(q->rear==q->size-1){
        cout<<"q is full";
    }
    else{
        q->rear++;
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
    for (int i = q.front+1; i < q.rear+1; i++)
    {
        cout<<q.Q[i]<<" ";
    }
    
    
}


int main(){
    struct Queue q;
    cout<<"enter the size";
    cin>>q.size;
    // q.Q=new int[q.size*sizeof(int)];
    q.Q=(int *)malloc(q.size*sizeof(int));
    q.front=q.rear=-1;

    // cout<<q.size;


    enqueue(&q,10);
    enqueue(&q,20);
    enqueue(&q,30);
    enqueue(&q,40);
    enqueue(&q,50);
    enqueue(&q,60);
    enqueue(&q,70);


    


    Display(q);

    // deque(&q);
    // Display(q);


}