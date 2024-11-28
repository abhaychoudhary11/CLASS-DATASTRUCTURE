#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};
int main()
{
    int n,val,target=20;
    Node *h,*c,*t;
    h=NULL;
    t=NULL;
    cout<<"NO OF NODE-->";
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        cout<<"ENTER "<< i <<" VALUE--> ";
        cin>>val;
        c=new Node();
        c->data = val;
        c->next = NULL;
        cout<<i+1;
    }

    for (int i = 0; i < target; i++)
    {
        cout<<i<<" TARGET";
    }
    
}
