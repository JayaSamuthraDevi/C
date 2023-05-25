#include<stdio.h>
struct node
{
int data;
struct node *next;
struct node *prev;
}*head,*tail,*new,*temp;

void create();
void display();
void reverse();
void main()
{
create();
display();
printf("\nAfter Reverse :\n");
reverse();
}

void create()
{
    int n;
    printf("Enter no. of elements :");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {

        new=(struct node*)malloc(sizeof(struct node));
        scanf("%d",&new->data);
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

void display()
{
    temp=head;
    while(temp!=NULL)
    {

        printf("%d ",temp->data);
        temp=temp->next;
    }

}

void reverse()
{

    temp=tail;
    while(temp->prev!=NULL)
    {

        printf("%d ",temp->data);
        temp=temp->prev;
    }

    printf("%d ",temp->data);
}
