#include <iostream>
using namespace std;

struct Node
{
    char data;
    struct Node *next;
}*top=NULL;

// void Display(){
//     struct Node *p;
//     p=top;
//     while(p!=NULL){
//         cout<<p->data;
//         p=p->next;
//     }

// }



void push(char x){
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

char pop(){
    struct Node *p;
    char x=-1;
    if(top==NULL){
        cout<<"stack is full";

    }
    else{
        p=top;
        top=top->next;
        x=p->data;
        free (p);

    }
    return x;
}



int pre(char x){
    if(x=='+'||x=='-'){
        return 1;
    }
    else if(x=='*'||x=='/')
    {
        return 2;
    }
    else
    {
        return 0;
    }
    
    
}


int isOperand(char x){
    if(x=='+' || x=='-' || x=='*' || x=='/' ) return 0;
    else
    {
        return 0;
    }
    
}

int main(){
    

    char *infix="a+b+c";
    char *postfix;
    

    return 0;




}