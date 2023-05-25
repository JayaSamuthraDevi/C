#include<stdio.h>
#include<stdlib.h>
void create();
void display();
int value,n;

struct node
{
    int data;
    struct node *next;

}*new,*temp,*tail,*head;
void main()
{
create();
display();
}

void create()
{
printf("Enter number of elements :");
scanf("%d",&n);
for(int i=0;i<n;i++)
{

    new=(struct node*)malloc(sizeof(struct node));
    scanf("%d",&new->data);
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
    new->next=head;

    }
}


}
void display()
{
    temp=head;

    while(temp->next!=head)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }

 printf("%d ",temp->data);

}
