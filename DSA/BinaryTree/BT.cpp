#include <iostream>

#include "Queue.h"
struct Node *root=NULL;
struct stack{
    int size;
    int top;
    struct Node **S;

};

void createStack(struct stack *st,int size){
    st->size=size;
    st->top=-1;
    // st->S=(struct Node **)malloc(st->size*sizeof(struct Node *));
    st->S=(struct Node **)new Node[st->size*sizeof(struct Node *)];
}

void push(struct stack *st,struct Node *x){
    if(st->top==st->size-1){
        cout<<"overflow ";
    }
    else{
        st->top++;
        st->S[st->top]=x;
    }

}

Node  *pop(struct stack *st){
    struct Node *x=NULL;
    if(st->top==-1){
        cout<<"stack empty";
    }
    else{
        x=st->S[st->top--];
    }
    return x;
}

int isEmptyStack(struct stack st){
    if(st.top==-1){
        return 1;
    }
    return 0;
}
int isFullStack(struct stack st){
    return st.top==st.size-1;
}



void Treecreate()
{
    struct Node *p,*t;
    int x;
    struct Queue q;
    create(&q,100);
    
    printf("Eneter root value ");
    scanf("%d",&x);
    root=(struct Node *)malloc(sizeof(struct Node));
    root->data=x;
    root->lchild=root->rchild=NULL;
    enqueue(&q,root);
    
    while(!isEmpty(q))
    {
        p=dequeue(&q);
        printf("eneter left child of %d ",p->data);
        scanf("%d",&x);
        if(x!=-1)
        {
            t=(struct Node *)malloc(sizeof(struct 
Node));
            t->data=x;
            t->lchild=t->rchild=NULL;
            p->lchild=t;
            enqueue(&q,t);
        }
        printf("eneter right child of %d ",p->data);
        scanf("%d",&x);
        if(x!=-1)
        {
            t=(struct Node *)malloc(sizeof(struct 
Node));
            t->data=x;
            t->lchild=t->rchild=NULL;
            p->rchild=t;
            enqueue(&q,t);
        }
    }
}
void Preorder(struct Node *p)
{   

    if(p)
    {
        printf("%d ",p->data);
        Preorder(p->lchild);
        Preorder(p->rchild);
    }
}
void Inorder(struct Node *p)
{
    if(p)
    {
        Inorder(p->lchild);
        printf("%d ",p->data);
        Inorder(p->rchild);
    }
}
void Postorder(struct Node *p)
{
    if(p)
    {
        Postorder(p->lchild);
        Postorder(p->rchild);
        printf("%d ",p->data);
    }
}

void Ipreorder(struct Node *p){
    struct stack st;
    createStack(&st,100);
    
    while(p || !isEmptyStack(st)){
        if(p){
            cout<<p->data;
            push(&st,p);
            p=p->lchild;
        }
        else{
            p=pop(&st);
            p=p->rchild;
        }

    }
}
void Iinorder(struct Node *p){
    struct stack st;
    createStack(&st,100);
    
    while(p || !isEmptyStack(st)){
        if(p){
            push(&st,p);
            p=p->lchild;
        }
        else{
            p=pop(&st);
            cout<<p->data;

            p=p->rchild;
        }

    }
}



void LevelOrder(struct Node *p){
    struct Queue q;
    create(&q,100);

    printf("%d",p->data);
    enqueue(&q,root);

    while (!isEmpty(q))
    {
        root=dequeue(&q);
        if(root->lchild){
            printf("%d",root->lchild->data);
            enqueue(&q,root->lchild);

        }
        if(root->rchild){
            printf("%d",root->rchild->data);
            enqueue(&q,root->rchild);
            
        }

    }
    


}


int count(struct Node* p){
    int x,y;
    if(p!=NULL){
        x=count(p->lchild);
        y=count(p->rchild);

        return x+y+1;
    }
    return 0;
}

int height(struct Node* root){
    int x=0,y=0;
    if(root==0){
        return 0;}
    x=height(root->lchild);
    y=height(root->rchild);

    if(x>y){
        return x+1;
    }
    else{
        return y+1;
    }
        
    
    return 0;
}









int main()
{
    Treecreate();
    // Preorder(root);
    // printf("\n Post Order ");
    // Ipreorder(root);
    LevelOrder(root);
    return 0;
}