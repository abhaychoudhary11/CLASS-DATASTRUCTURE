#include<iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
};
/*------------------ PUSHED IN LINKED LIST ------------------*/
int main()
{
    Node *h = NULL; 
    Node *t = NULL;
    h = NULL;
    t = NULL;
    Node *c= new Node();
    if (h==NULL)
    {
        h=c;
        c->next=NULL;
    }
    else
    {
        c->next=h;
        h=c;
    }
}