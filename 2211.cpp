#include<iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
};

/*--------------------------------LINKED LIST--------------------------------*/
int main()
{
    cout<<"------ LINKED LIST PROGRAM STARTED ------"<<endl;
    int n,val;
    Node *H,*T,*C;
    T=NULL;
    H=NULL;
    cout<<"ENTER TOTAL NUMBER OF NODES:";
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        cout<<"ENTER "<< i <<" VALUE-->";
        cin>>val;
        C = new Node();
        C->data=val;
        C->next=NULL;
        if (H==NULL)
        {
            H=C;
            T=C;
        }
        else
        {
            T->next=C;
            T=C;
        }
    }
    T=H;
    cout<<"MY LINKED IS FOLLOW-->"<<endl;
    while (T!=NULL)
    {
        cout<< T-> data<<" --> ";
        T=T->next;
    }
    cout<<"NULL\n"<<endl;
    cout<<"---PROGRAM IS FINISHED---"<<endl;

    return 0;
}
