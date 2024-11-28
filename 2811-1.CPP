#include<iostream>
using namespace std;
struct Node
{
    int data;
    Node *left,*right;
};
Node *createTree()
{
    int val;
    Node *createNode;
    cout<<"ENTER THE DATA VALUE FOR NODE OR (-1) IF YOU NOT WATN TO CREATE A NODE-->";
    cin>>val;
    if (val == -1)
    {
        return NULL;
    }
    else
    {
        createNode = new Node();
        createNode->data = val;
        cout<<"LEFT NODE OF "<< val<<endl;
        createNode->left=createTree();
        cout<<"RIGHT NODE OF "<< val<<endl;
        createNode->right=createTree();
        return createNode;
    }
}
void preorder(Node *ptr)
{
    if (ptr == NULL)
    {
        return;
    }
    else
    {
        cout<<ptr->data <<"";
        preorder(ptr->left);
        preorder(ptr->right);
    }
    
}
void INorder(Node *ptr)
{
    if (ptr == NULL)
    {
        return;
    }
    else
    {
        INorder(ptr->left);
        cout<<ptr->data <<"";
        INorder(ptr->right);
    }
    
}
void POST(Node *ptr)
{
    if (ptr == NULL)
    {
        return;
    }
    else
    {
        POST(ptr->left);
        POST(ptr->right);
        cout<<ptr->data <<"";
    }
    
}
int main()
{
    cout<<"-----CREATION OF BINARY TREE STARTED-----"<<endl;
    Node * root = createTree();
    cout<<"ELEMENT AS PER PRE ORDER -->"<<endl;
    preorder(root);
    cout<<endl;
    cout<<"ELEMENT AS PER IN ORDER -->"<<endl;
    INorder(root);
    cout<<endl;
    cout<<"ELEMENT AS PER POST ORDER -->"<<endl;
    POST(root);
    if (root != NULL)
    {
        cout<<"VALUE OF ROOT IS -->"<< root -> data ;
    }
    else
    {
        cout<<"-----TREE IS EMPTY-----"<<endl;
    }
    
    return 0;
}
