#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
using namespace std;

struct Node
{
    int data;
    Node *left, *right;

    Node(int d=0)
    {
        data=d;
        this->left=NULL;
        this->right=NULL;
    }  

};

Node* createTree()
{
    int d=0;
    cout<<"Enter value of root node:";
    cin>>d;
    Node* root= new Node(d);
    queue <Node*> Q;
    Q.push(root);
   

    while(d!=-1)
    {
        cout<<endl;
        Node* parent=Q.front();
        Q.pop();
        d=0;
        cout<<"Enter left child val:";
        cin>>d;
        if(d!=-1)
        {
            Node *temp = new Node(d);
            parent->left=temp;
            Q.push(temp);
        }
        d=0;
        cout<<"\nEnter right child val:";
        cin>>d;
        if(d!=-1)
        {
            Node *temp = new Node(d);
            parent->right=temp;
            Q.push(temp);
        }
    }
    return(root);
}

void PreOrder(Node* root)
{
    if(root==NULL)
    return;
    else
    {
        cout<<root->data<<" ";
        PreOrder(root->left);
        PreOrder(root->right);
    }
}
void IPreorder(Node* root){
    
}
void InOrder(Node* root)
{
    if(root==NULL)
    return;
    else
    {
        InOrder(root->left);
        cout<<root->data<<" ";
        PreOrder(root->right);
    }
}
void PostOrder(Node* root)
{
    if(root==NULL)
        return;
    else{
        PostOrder(root->left);
        PostOrder(root->right);
        cout<<root->data<<" ";
    }
}

int main()
{
    system("CLS");
    Node* root=createTree();
    cout<<endl;
    PreOrder(root);
    cout<<endl;
    InOrder(root);
    cout<<endl;
    PostOrder(root);


}