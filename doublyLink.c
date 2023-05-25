#include<stdio.h>
#include<stdlib.h>

void create();
void insertFront();
void insertEnd();
void insertMiddle();
void deleteEnd();
void deleteFront();
void deleteMiddle();
void display();

int value;
int pos;

struct node
{
    int data;
    struct node *next,*prev;

}*temp,*head,*tail,*new;

void main()
{
int ch;

while(1)
{
    printf("\n 1.Create\n 2.insertFront\n 3.insertEnd\n 4.insertMiddle \n 5.deleteFront \n 6.deleteEnd \n 7.deleteMiddle \n 8.display\n 9.exit");
    printf("\nEnter ur choice: \n");
    scanf("%d",&ch);

switch(ch)
{
    case 1:

     create();
     display();
     break;
    case 2:
    insertFront();
    display();
    break;
    case 3:
    insertEnd();
    display();
    break;
    case 4:
    insertMiddle();
    display();
    break;
    case 5:
    deleteFront();
    display();
    break;
    case 6:
    deleteEnd();
    display();
    break;
    case 7:
    deleteMiddle();
    display();
    break;
    case 8:
    display();
    break;
    case 9:

    break;
}

}

}
void create()
{
    int n;
    printf("enter no.of elements in dlist :");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {

new=(struct node*)malloc(sizeof(struct node));
scanf("%d",&value);

new->data=value;
new->next=NULL;
new->prev=NULL;

if(head==NULL)
{
   head=new;
   tail=new;

}
else
{

    tail->next=new;
    new->prev=tail;
    tail=new;
}
}
}

void insertEnd()
{
printf("\nEnter element to insert at End :");
scanf("%d",&value);
new=(struct node*)malloc(sizeof(struct node));
new->data=value;

new->next=NULL;
tail->next=new;
new->prev=tail;
tail=new;
}


void insertFront()
{
printf("\nEnter element to insert at Front:");
scanf("%d",&value);
new=(struct node*)malloc(sizeof(struct node));
new->data=value;
new->prev=NULL;
new->next=head;
head->prev=new;
head=new;
}



void insertMiddle()
{

    printf("\nEnter position :");
    scanf("%d",&pos);
printf("\nEnter element to insert at Middle:");
scanf("%d",&value);

new=(struct node*)malloc(sizeof(struct node));
new->data=value;
temp=head;
for(int i=0;i<pos-1;i++)
{
    temp=temp->next;
}
new->next=temp->next;
new->prev=temp;
temp->next=new;
//temp->next->prev=new;

}


void deleteEnd()
{
temp=tail;
temp=temp->prev;
temp->next=NULL;
tail=temp;
}



void deleteFront()
{
temp=head;
temp=temp->next;
temp->prev=NULL;
head=temp;

}



void deleteMiddle()
{
printf("Enter position of element to be delete: ");
scanf("%d",&pos);
temp=head;
for(int i=0;i<pos-1;i++)
{
    temp=temp->next;

}

temp->next=temp->next->next;

}




void display()
{
    temp=head;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;

    }
}
