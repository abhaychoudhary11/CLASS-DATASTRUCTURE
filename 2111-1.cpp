#include<stdio.h>
#include<malloc.h>



struct Node 
{
    int num;
    struct Node *next;
};
struct Node *start=NULL;

void insertAtEnd(int num)
{
    struct Node *j;
    struct Node *t=(struct Node *)malloc(sizeof(struct Node));
    t->num=num;
    t->next=NULL;
    if(start==NULL)
    {
        start=t;
    }
    else
    {
        j=start;
        while(j->next!=NULL)
        {
            j=j->next;
        }
            j->next=t;
    }

}

void traverseTopToBottom(struct Node *j)
{
    if(j==NULL)
    {
        printf("No data Available\n");
    }
    else
    {
        while(j!=NULL)
        {
            printf("num is:%d\n",j->num);
            j=j->next;
        }
    }
}

int main()
{
    int ch,num,pos;
    while(1)
    {
        printf("-----------Singly Linked List-----------\n");
        printf("1.Insert Node At End:\n");
        printf("2.Insert Node At Start:\n");
        printf("3.Insert Node at Position:\n");
        printf("4.Traverse Bottom to Top:\n");
        printf("5.Traverse Top To Bottom:\n");
        printf("6.Remove Node from Position :\n");
        printf("7.EXIT\n");
        printf("Choose your choice:");
        scanf("%d",&ch);
        
        if(ch==1)
        {
            printf("Enter your num:");
            scanf("%d",&num);
            insertAtEnd(num);
        }
        if(ch==4)
        {
            traverseTopToBottom(start);
        }
        return 0;
    }
}