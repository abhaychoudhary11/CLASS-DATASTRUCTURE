#include <iostream>
using namespace std;

struct Node 
{
    int data;
    Node *next;
};


void insertatstart(Node** h, int val) 
{
    Node* c = new Node();
    c->data = val;
    c->next = *h; 
    *h = c;       
}

int main() 
{
    cout << "--------INSERTING PROGRAM IS STARTED ----------" << endl;
    int n, val,x;
    Node *h, *c, *t;
    t = NULL;
    h = NULL;
    
    cout << "ENTER TOTAL NUMBER OF NODES: ";
    cin >> n;

    for (int i = 1; i <= n; i++) 
    {
        cout << "ENTER " << i << " VALUE--> ";
        cin >> val;
        c = new Node();
        cout<<c;
        c->data = val;
        c->next = NULL;

        if (h == NULL) 
        {
            h = c; 
            t = c; 
        } 
        else 
        {
            t->next = c; 
            t = c;    
        }
    }

    t = h;
    cout << "MY LINKED LIST IS FOLLOW-->" << endl;
    while (t != NULL) 
    {
        cout << t->data << " --> ";
        t = t->next;
    }
    cout << "NULL" << endl; 

    insertatstart(&h, x);
    cout<<"ENTER VALUE YOU WANT TO ADD-->";
    cin>>x; 

    t = h;
    cout << "AFTER INSERTING AT START, MY LINKED LIST IS-->" << endl;
    while (t != NULL) 
    {
        cout << t->data << " --> ";
        t = t->next;
    }
    cout << "NULL" << endl; 

    return 0;
}