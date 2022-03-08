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
    // first=(struct Node *)malloc(sizeof(struct Node));

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
        // cout<<p->data;
        printf("%d",p->data);
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

int Maxi(struct Node *p){
    int max=INT_MIN;
    while(p!=NULL){
        if(max<p->data){
            max=p->data;
        }
        p=p->next;

    }
    return max;
}
int RMaxi(struct Node *p){
    int max=INT_MIN;

    if(p==0){
        return max;
    }
    else{
        
        max=RMaxi(p->next);

        if(max>p->data){
            return max;
        }
        else{
            max=p->data;
        }
    }
}

int main()
{
    int A[]={33,5,77,10,15};

    create(A,5);
    
    Rdisplay(first);
    // cout<<endl<<Add(first);
    // cout<<RMaxi(first);

    return 0;
} 