#include<stdio.h>
#include<malloc.h>

struct Node
{
int num;
struct Node *next;
};
struct Node *start=NULL;

void insertAtStart(int num)
{
struct Node *t=(struct Node *)malloc(sizeof(struct Node));
t->num=num;
t->next=NULL;
if(start==NULL)
{
start=t;
}
else
{
t->next=start;
start=t;
}
}

void insertAtEnd(int num)//parameter
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

void traverseBottomToTop(struct Node *j)
{
if(j==NULL)
{
return;
}
traverseBottomToTop(j->next);
printf("%d\n",j->num);
}

void insertAtPosition(int num,int pos)
{
struct Node *t=(struct Node *)malloc(sizeof(struct Node));
t->num=num;
t->next=NULL;
struct Node *p1,*p2;
p1=start;
int x=0;
if(start==NULL)
{
printf("Invalid Position:\n");
return;
}
while(x<pos && p1!=NULL)
{
p2=p1;
p1=p1->next;
x++;
}
p2->next=t;
t->next=p1;

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
if(ch==2)
{
printf("Enter your num:");
scanf("%d",&num);
insertAtStart(num);
}
if(ch==3)
{
printf("Enter yout num:");
scanf("%d",&num);
printf("Enter your position for add:");
scanf("%d",&pos);
insertAtPosition(num,pos);
}
if(ch==4)
{
traverseBottomToTop(start);
}
if(ch==5)
{
traverseTopToBottom(start);
}

}


return 0;
}