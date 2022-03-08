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

int isBalanced(char *exp)
{
    int i;
    for(i=0;exp[i]!='\0';i++){
        if(exp[i]=='('){
            push(exp[i]);
        }
        else if(exp[i]==')'){
            if(top==NULL){
                return 0;
            }
            pop();
        }
    }
    if(top==NULL){
        return 1;
    }
    else
    {
        return 0;
    }
    
}


int main(){
    

    char *exp="((a+b)*(c-d)))";

    cout<<isBalanced(exp);

    return 0;




}