#include <iostream>
using namespace std;

//Declareation


struct Node
{
    int data;
    struct Node *next;

}*first=NULL,*last=NULL;


//LinkedList create
void create(int A[],int n){
    int i;
    struct Node *t,*last;
    // first=new Node[sizeof(struct Node)];
    first=(struct Node *)malloc(sizeof(struct Node));

    first->data=A[0];
    first->next=NULL;
    last=first;

    for ( i = 1; i < n; i++)
    {
        // t=new Node[sizeof(struct Node)];
        t=(struct Node *)malloc(sizeof(struct Node));
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
    
}



void Display(struct Node *p){
    while(p!=NULL){
        // cout<<p->data<<" ";
        printf("%d ",p->data);
        p=p->next;
    }
}

void Insertfirst(struct Node *p,int a){
    struct Node *n;
    // n=new Node;
    n=(struct Node *)malloc(sizeof(struct Node));

    n->data=a;
    n->next=first;
    first=n;
}
int count(struct Node *p){
    int l=0;
    while(p){
        l++;
        p=p->next;
    }
    return l;
}
void InsertPosition(struct Node *z,int a,int index){
    struct Node *n,*p;
    // n=new Node;
    n=(struct Node *)malloc(sizeof(struct Node));

    n->data=a;
    p=z;
    if(index<0 || index>count(p)){
        return;
    }
    else if(index>0){
        for(int i=0;i<index-1;i++){

        p=p->next;


    }
        n->next=p->next;
        p->next=n;
        }
    else if(index==0){
        n->next=first;
        first=n;

    }
    }

void InsertLast(int n){
    struct Node *p;
    // p=new Node;
    p=(struct Node *)malloc(sizeof(struct Node));

    p->data=n;
    p->next=NULL;
    if(first==NULL){
        first=p;
        last=p;
    }
    else
    {
        last->next=p;
        last=p;
    }
    


}

void insertionSort(struct Node *p,int x){
    // struct Node *p,*z,*a;
    // z=first;
    // a=NULL;
    // p=new Node;
    // p->data=x;
    // for(int i=0;i<count(first);i++){
    //     if(p->data<z->data){
    //         p->next=z;
    //         z=a;
    //         z->next=p;
    //         break;
    //     }
    //     a=z;
    //     z=z->next;
    // } correct but writing in better way
    struct Node *z,*t;
    p=first;
    z=NULL;
    t=new Node;
    t->data=x;
    t->next=NULL;
    if(first==NULL){
        first=t;

    }
    else{
        while(p && p->data<x){
        z=p;
        p=p->next;

        }
        if(p==first){
            t->next=first;

            first=t;
        }
        else{
            t->next=p;
            z->next=t;

        }

    }




}

int Delete(struct Node *p,int index){
    struct Node  *q;
    
    q=NULL;
    int x=-1;

    if(index<1 || index>count(p)){
        return -1;
    }
    if(index==1){
        x=p->data;
        q=first;
        first=first->next;
        delete q;
        return x;

    }
    else{
        for(int i=0;i<index-1;i++){
            q=p;
            p=p->next;
        }

        if(p){
            q->next=p->next;
            x=p->data;
            delete p;
            return x;
        }

    }
    return x;
}

bool IsSorted(struct Node *p){
    struct Node *q;
    int x=INT_MIN;
    while(p!=NULL){
            if(p->data<x){
            return false;
            } 
            x=p->data;
            q=p;
            p=p->next;  
    }
    return true;


}



int main()
{
    struct Node *temp;
    int A[]={33,5,77,10,15};

    create(A,5);
    
    // Rdisplay(first);
    // cout<<endl<<Add(first);
    // InsertPosition(first,99,0);
    // InsertPosition(first,69,1);
    InsertPosition(first,79,2);

    // InsertLast(5);
    // InsertLast(6);
    
    // InsertLast(9);

    // InsertLast(7);

    // InsertLast(15);

    // insertionSort(first,8);
    // insertionSort(first,7);


    

    Display(first);

    // cout<<IsSorted(first);

    // cout<<endl<<Delete(first,1)<<endl;

    // Display(first);


    return 0;
} 