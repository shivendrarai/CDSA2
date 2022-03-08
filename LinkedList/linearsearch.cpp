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
        cout<<p->data;
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

struct Node * LSearch(struct Node *p,int key){
    
    while(p!=NULL){
        if(key==p->data){
            return p;
        }
        p=p->next;
    }
    return NULL;

}
struct Node * RLSearch(struct Node *p,int key){
    static int z=0;
    if(p==0){
        z=-1;
        return NULL;
    }
    else{
        if(key!=p->data){
            p=p->next;
            z++;
            return RLSearch(p,key);
        }
        else
        {   
            return p;
        }
        
    }

}
//improve Lsearch
struct Node * ILSearch(struct Node *p,int key){
    struct Node *q=NULL;
    while(p!=NULL){
        if(key==p->data){
            q->next=p->next;
            p->next=first;
            first=p;
            return p;
        }
        q=p;
        p=p->next;
    }
    return NULL;

}



int main()
{
    struct Node *temp;
    int A[]={33,5,77,10,15};

    create(A,5);
    
    // Rdisplay(first);
    // cout<<endl<<Add(first);
    temp=ILSearch(first,15);
    if(temp){
        cout<<"Key is found "<<temp->data;
    }
    else
    {
        cout<<"key not found";
    }
    Display(first);
    return 0;
} 