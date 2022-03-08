#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;

}*first=NULL,*second=NULL,*third=NULL;

void create1(int A[],int n){
    int i;
    struct Node *t,*last;
    first=new Node[sizeof(struct Node)];
    first->data=A[0];
    first->next=NULL;
    last=first;

    for ( i = 1; i < n; i++)
    {
        t=new Node[sizeof(struct Node)];
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
    
}
void create2(int A[],int n){
    int i;
    struct Node *t,*last;
    second=new Node[sizeof(struct Node)];
    second->data=A[0];
    second->next=NULL;
    last=second;

    for ( i = 1; i < n; i++)
    {
        t=new Node[sizeof(struct Node)];
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
    
}
int count(struct Node *p){
    int l=0;
    while(p){
        l++;
        p=p->next;
    }
    return l;
}

void Display(struct Node *p){
    while(p!=NULL){
        cout<<p->data<<" ";
        p=p->next;
    }
}

//Recursive display;

void Concat(struct Node *p,struct Node *q){
    third=p;
    while(p->next!=NULL){
        p=p->next;
    }
    p->next=q;
}
void Merge(struct Node *p,struct Node *q){
    struct Node *Last;
    if(p->data<q->data){
        third=Last=p;
        p=p->next;
        third->next=NULL;
    }
    else{
        third=Last=q;
        q=q->next;
        third->next=NULL;        
    }
    while(p && q){
        if(p->data<q->data){
            Last->next=p;
            Last=p;
            p=p->next;
            Last->next=NULL;
        }
        else{
            Last->next=q;
            Last=q;
            q=q->next;
            Last->next=NULL;
        }
    }
    if(p)Last->next=p;
    if(q)Last->next=q;
}


int main()
{
    int A[]={1,2,4};

    int B[]={1,3,4};

    create1(A,3);
    create2(B,3);

    // Display(first);
    // Display(second);
    // cout<<endl;
    Merge(first,second);
    Display(third);


    return 0;
} 