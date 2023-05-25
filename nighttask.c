/*
1.How to remove mid element from the stack without using another stack
 2. Input - a3b2c3
 output:aaabbccc
 */
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*next;
}*head,*temp,*tail,*top=NULL;
int create()
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
     return n;
}
void pop(int n)
{
    display();
    temp=top;
    //while(temp!=NULL)
    int mid=n/2;
    for(int i=0;i<mid-1;i++)
    {
        temp=temp->next;
    }
        printf("\n the deleted element is %d",temp->next->data);
    temp->next=temp->next->next;
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
    int mid=create();
    pop(mid);

    display();
}
