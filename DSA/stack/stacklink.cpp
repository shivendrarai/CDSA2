#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
}*top=NULL;
    
void Display(){
    struct Node *p;
    p=top;
    while(p!=NULL){
        // cout<<p->data;
        printf("%d ",p->data);
        p=p->next;
    }

}



void push(int x){
    struct Node *t;
    t=new Node;
    if(t==NULL){
        cout<<"Stack is full";
    }
    else{
        t->data=x;
        t->next=top;
        top=t;
    }

}

int pop(){
    struct Node *p;
    int x=-1;
    if(top==NULL){
        // cout<<"stack is full";
        printf("%s","stack is full");

    }
    else{
        p=top;
        top=top->next;
        x=p->data;
        free (p);

    }
    return x;
}


int main(){
    


    push(10);
    push(20);
    push(30);
    push(40);



    Display();
    // cout<<endl;
    printf("\n");
    pop();
    // cout<<endl;
    printf("\n");

    Display();




}