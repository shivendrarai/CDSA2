// #include <iostream>
// using namespace std;
#include <stdio.h>
#include <stdlib.h>

struct stack{
    int *S;
    int size;
    int top;
};  

void create(struct stack *st){
    // cout<<"enter size"<<endl;
    // cin>>st->size;
    printf("Enter Size ");
    scanf("%d",&st->size);
    st->top=-1;
    // st->S=new int[sizeof(int)*(st->size)];
    st->S=(int *)malloc(st->size*sizeof(int));

}

void Display(struct stack st)
{
    int i;
    for(i=st.top;i>=0;i--)
        // cout<<st.S[i]<<" ";
        printf("%d ",st.S[i]);
        

}
void Push(struct stack *st,int x)
{
    if(st->top==st->size-1){
        // cout<<"stack overflow";
        printf("Stack overflow\n");
    }
    else{
        st->top++;
        st->S[st->top]=x;
    }
}

int pop(struct stack *st){
    int x=-1;
    if(st->top==-1){
        // cout<<"empty";
        printf("Stack Underflow\n");
    }
    else{
        x=st->S[st->top--];
    }
    return x;
}

// int peek(struct stack st,int index)
// {
//    int x=-1;
//    if(st.top-index+1<0)
//        printf("Invalid Index \n");
//    x=st.S[st.top-index+1];

//  return x;
// }

int main(){
    struct stack st;
    create(&st);
    Push(&st,0);
    Push(&st,1);
    Push(&st,2);
    Push(&st,3);
    Push(&st,4);





    Display(st);
    pop(&st);
    printf("\n");
    Display(st);

    // cout<<st.top;
    // cout<<peek(st,4);




}