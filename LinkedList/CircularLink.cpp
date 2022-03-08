#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;

}*Head=NULL;

void create(int A[],int n){
    int i;
    struct Node *t,*last;
    Head=new Node[sizeof(struct Node)];
    Head->data=A[0];
    Head->next=Head;
    last=Head;

    for ( i = 1; i < n; i++)
    {
        t=new Node[sizeof(struct Node)];
        t->data=A[i];
        t->next=last->next;
        last->next=t;
        last=t;
    }
    
}


void Display(struct Node *p){
    do{
        cout<<p->data<<" ";
        p=p->next;
    }while(p!=Head);
}

//Recursive display;

void Rdisplay(struct Node *p){
    static int flag=0;
    if(p!=Head || flag==0){

        flag=1;
        cout<<p->data<<" ";
        Rdisplay(p->next);
    }
    flag=0;
}
int Length(struct Node *p){
    int l=0;
    do{
        l++;
        p=p->next;
    }while(p!=Head);
    return l;
}

void Insert(struct Node *p,int index,int x){
    struct Node *t;
    int i;
    if(index<0 || index>Length(Head)){
        return ;
    }
    if(index==0){
        t=new Node;
        t->data=x;
        if(Head==NULL){
            Head=t;
            t->next=Head;
        }
        else{
            while(p->next!=Head){
                p=p->next;
            }
            p->next=t;
            t->next=Head;
        }
    }
    else{
        t=new Node;
        t->data=x;
        for(int i=0;i<index-1;i++){
            p=p->next;
        }
        t->next=p->next;
        p->next=t;

    }
}
// int Delete(struct Node *p,int index)
// {
//     struct Node *q;
//     int i,x;

//    if(index <0 || index >Length(Head))
//        return -1;
//    if(index==1)
//    {
//        while(p->next!=Head)p=p->next;
//         x=Head->data;
//         if(Head==p)
//         {
//             free(Head);
//             Head=NULL;
//         }
//  else
//  {
//  p->next=Head->next;
//  free(Head);
//  Head=p->next;
//  }
//  }
//  else
//  {
//  for(i=0;i<index-2;i++)
//  p=p->next;
//  q=p->next;
//  p->next=q->next;
//  x=q->data;
//  free(q);
//  }
//  return x;
// }

int main()
{
    int A[]={33,5,77,10,15};

    create(A,5);
    Insert(Head,0,6);
    Rdisplay(Head);
    
    // Rdisplay(first);

    return 0;
} 