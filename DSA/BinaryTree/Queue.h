#include<iostream>
using namespace std;

struct Node{
    struct Node *lchild;
    int data;
    struct Node *rchild;

};


struct Queue{
    int size;
    int front;
    int rear;
    Node **Q;
    


};



void create(struct Queue *q,int size){
    q->size=size;
    q->front=q->rear=0;
    q->Q=(Node **)malloc(q->size*sizeof(int));


}
void enqueue(struct Queue *q,Node * x){
    if((q->rear+1)%q->size==q->front){
        cout<<"q is full";
    }
    else{
        q->rear=(q->rear+1)%q->size;
        q->Q[q->rear]=x;
    }
}
Node * dequeue(struct Queue *q){
    Node * x=NULL;
    if(q->rear==q->front){
        cout<<"q is empty";
    }
    else{
        q->front++;
        x=q->Q[q->front];
    }
    return x;
}

int isEmpty(struct Queue q){
 return q.front==q.rear;
}