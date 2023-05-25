#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*next;
}*head,*temp,*tail,*top=NULL;
void create()
{
    int n;
    printf("enter the size ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
    struct node*newnode = (struct node*)malloc(sizeof(struct node));
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    if(top==NULL)
    {
        top=newnode;
    }
    else
    {
        newnode->next=top;
        top=newnode;
    }

    }
}
void pop()
{
    display();
    temp=top;
    //while(temp!=NULL)

        printf("\n the deleted ele is %d",top->data);
        top=top->next;

    printf("\n");

}
void display()
{
    temp=top;
    if(top != NULL)
    {
     while(temp!= NULL)
        {
            printf("\n values : %d",temp->data);
            temp=temp->next;
        }
    }
    else
    {
        printf("UNDERFLOW");
    }
}
void main()
{
    create();
    pop();
    display();
}
