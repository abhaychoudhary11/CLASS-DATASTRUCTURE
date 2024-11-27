#include <iostream>
using namespace std;

struct Node //DEFINE A STRUCTURE FOR NODE
{
    string name; //NAME OF STUDENT
    Node* next; //POINTER TO THE NEXT NODE IN THE LIST
};
int main() 
{
    int n;
    cout << "ENTER THE NUMBER OF STUDENT--> "; // PRINT
    cin >> n; // INPUT OF NUMBER OF STUDENTS

    Node* head = nullptr; 
    Node* tail = nullptr;
    for (int i = 0; i < n; ++i) // LOOP FOR GETTING NAMES OF STUDENTS 
    {
        Node* c = new Node();
        cout << "ENTER NAME OF STUDENTS " << (i + 1) << "--> ";
        cin >> c->name; // INPUT OF STUDENTS NAME 
        c->next = nullptr; //NEW NODE ADDRESS IS NULL

        if (head == nullptr)  //CHECKING CONITION FOR THE LINKED LIST IS EMPTY OR NOT
        {
            head = c;
            tail = c;
        } 
        else 
        {
            tail->next = c;
            tail = c;
        }
    }
    tail->next = head; // JOIN LAST NODE TO HEAD

    int i;
    cout << "ENTER A POSITIVE NUMBER(1 to" <<n-1<<" )--> "; // FROM WHERE USER WANT TO START DELETING 
    cin >> i; // INPUT INTEGER 
    Node* current = head;
    Node* prev = tail; 

    while (current->next != current) // LOOP FOR DELETING UNTILL ONLY ONE NODE IS LEFT
    { 
        for (int count = 1; count < i; ++count)  
        {
            prev = current; 
            current = current->next; 
        }
        prev->next = current->next; //DELETING BY JOIN PRIVIOUS NODE TO THE NEXT NODE
        current = prev->next; 
    }
    cout << "THE LAST STUDENT IS--> " << current->name << endl;
    return 0;
}