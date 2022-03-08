#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;

}*first=NULL;

void create(int A[],int n){
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



void Display(struct Node *p){
    while(p!=NULL){
        cout<<p->data<<" ";
        p=p->next;
    }
}

//Recursive display;

void Rdisplay(struct Node *p){
    if(p!=NULL){
        cout<<p->data<<" ";
        Rdisplay(p->next);
    }
}

int Add(struct Node *p){
    int sum=0;


    while(p!=NULL){
        sum+=p->data;
        p=p->next;
    }
    return sum;

}
int count(struct Node *p){
    int l=0;
    while(p){
        l++;
        p=p->next;
    }
    return l;
}
void Duplicate(struct Node *p){
    struct Node *q;
    q=p->next;
    while(q!=NULL){
        if(p->data!=q->data){
            p=p->next;
            q=q->next;
        }
        else{
            p->next=q->next;
            delete q;
            q=p->next;
        }

    }
}

void Reverse(struct Node *p){
    int l=count(p),i=0;
    int B[l];
    while (p!=NULL)
    {
        B[i]=p->data;
        i++;
        p=p->next;
    }
    p=first;
    i--;
    while ((p!=NULL))
    {
        p->data=B[i];
        p=p->next;
        i--;

    }
    
    
}
void Reverse2(struct Node *p){
    struct Node *q=NULL,*r=NULL;
    while(p!=NULL){
        r=q;
        q=p;
        p=p->next;
        q->next=r;

    }
    first=q; 
}

void RReverse(struct Node *q,struct Node *p){
    
    if(p){
        RReverse(p,p->next);
        p->next=q;
    }
    else{
        first=q;

    }
}



int main()
{
    struct Node *temp;
    int A[]={33,5,5,77,10,10,15};

    create(A,7);

    // Duplicate(first);
    Reverse2(first);

    Display(first);
    return 0;
} 