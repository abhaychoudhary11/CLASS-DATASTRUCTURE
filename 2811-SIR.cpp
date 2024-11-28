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
int main()
{
    cout<<"-----CREATION OF BINARY TREE STARTED-----"<<endl;
    Node * root = createTree();
    cout<<"VALUE OF ROOT IS "<< root -> data ;
    return 0;
}
