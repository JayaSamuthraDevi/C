#include<stdio.h>
#include<stdlib.h>

struct node{
int data;
struct node *next;
}*head,*tail,*temp,*new,*temp1;

int i,n,value;


void create()
{
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        new=(struct noe*)malloc(sizeof(struct node));
        scanf("%d",&value);
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

        if(temp!=NULL)
    {
        printf("%d ",temp->data);
    }
    temp=temp->next;
    }
}

void deleteFront()
{
    temp=head;
    printf("\n%d\n",temp->data);
    temp=temp->next;
    head=temp;



}

void sort()
{
   temp=head;

while(temp!=NULL)
{
    temp1=temp->next;

while(temp1!=NULL)
{


       if((temp->data)>(temp1->data))
       {
           int a=temp->data;
           temp->data=temp1->data;
           temp1->data=a;
       }
       temp1=temp1->next;


}
temp=temp->next;
}
}

void main()
{

    create();
    display();
    deleteFront();
    sort();
    display();

}
