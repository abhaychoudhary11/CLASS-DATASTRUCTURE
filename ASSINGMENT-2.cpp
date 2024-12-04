#include <iostream>
using namespace std;

struct Node 
{
    int data;
    Node *left, *right;
};

Node* createTree() 
{
    int val;
    cout << "ENTER THE DATA VALUE FOR NODE OR (-1) IF YOU DO NOT WANT TO CREATE A NODE --> ";
    cin >> val;
    if (val == -1) 
    {
        return NULL;
    } 
    else 
    {
        Node *createNode = new Node();
        createNode->data = val;
        cout << "LEFT NODE OF " << val << endl;
        createNode->left = createTree();
        cout << "RIGHT NODE OF " << val << endl;
        createNode->right = createTree();
        return createNode;
    }
}

void checktree(Node *node, int &sum, int &parentDiff, int parentValue) 
{
    if (node == NULL) 
    {
        return;
    }

    if (node->left) 
    {
        sum += node->left->data;
        if (node->left->data > node->data) 
        {
            parentDiff += node->left->data - node->data;
        } 
        else 
        {
            parentDiff += node->data - node->left->data;
        }
        checktree(node->left, sum, parentDiff, node->data);
    }

    if (node->right) 
    {
        sum += node->right->data;
        if (node->right->data > node->data) 
        {
            parentDiff += node->right->data - node->data;
        } 
        else
        {
            parentDiff += node->data - node->right->data;
        }
        checktree(node->right, sum, parentDiff, node->data);
    }
}

bool magicaltree(Node *tree1, Node *tree2) 
{
    int sum1 = 0, pd1 = 0;
    int sum2 = 0, pd2 = 0;

    checktree(tree1, sum1, pd1, 0);
    checktree(tree2, sum2, pd2, 0);

    return (sum1 == sum2) && (pd1 == pd2);
}

int main() 
{
    cout << "-----CREATION OF FIRST BINARY TREE STARTED-----" << endl;
    Node *root1 = createTree();

    cout << "-----CREATION OF SECOND BINARY TREE STARTED-----" << endl;
    Node *root2 = createTree();

    if (magicaltree(root1, root2)) 
    {
        cout << "-----------THE GIVEN TREES ARE MAGICAL TREES-----------" << endl;
    } 
    else 
    {
        cout << "-----------THE GIVEN TREES ARE NOT MAGICAL TREES-----------" << endl;
    }
    return 0;
}