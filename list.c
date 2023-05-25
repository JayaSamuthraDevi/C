#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
}*head,*temp,*new,*tail;
void create();
void display();
int a,value;

void create()
{
    printf("Enter no.of elements : ");
scanf("%d",&a);
for(int i=0;i<a;i++)
{
    new=(struct node*)malloc(sizeof(struct node));
    Scanf("%d",&value);
    new->data=value;
    new->next=NULL;


    if(head==NULL)
    {
         head=new;
         tail=new;
    }
    else
    {
        tail->next=new;
        tail=new;
    }

}
}

void display()
{
temp=head;
while(temp!=NULL)
{
    printf("%d",temp->data);
    temp=temp->next;
}

}

void main()
{
    create();
    display();
}
