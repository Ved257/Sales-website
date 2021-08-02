#include<iostream>
#include<string>
using namespace std;

struct node{
    char data;
    struct node* left,*right;
}*root;

int top=-1;
struct node* stack[100];

int isOp(char c){
    if(c=='+'|| c == '-' ||c == '*' || c == '/' ||c == '^')
    return 1;
    return 0;
}

void Preord(node* root){
    if(root==NULL)
    return;
    cout<<root->data;
    Preord(root->left);
    Preord(root->right);
}

void Inord(node* root){
    if(root==NULL)
    return;
    Inord(root->left);
    cout<<root->data;
    Inord(root->right);
}

struct node* newn(char c)
{
    node *q;
    q = new node;
    q->data =c;
    q->left= NULL;
    q->right = NULL;
    return q;
}

struct node* tree(string str)
{
    for(int i=0;i<str.length();i++)
    {
        struct node* j = newn(str[i]);
        if(isOp(str[i])==1)
        {
            j->right=stack[top--];
            j->left=stack[top--];
            top++;
            stack[top]=j;
        }
        else
        {
            top++;
            stack[top]=j;
        }
    }
    struct node*t=stack[top--];
    return t;
}

int main()
{
    string exp;
    cout<<"Enter the Posfix exp"<<endl;
    cin>>exp;
    root=tree(exp);
    cout<<endl;
    cout<<"Infix"<<endl;
    Inord(root);
    cout<<endl;
    cout<<"prefix"<<endl;
    Preord(root);
    return 0;
}