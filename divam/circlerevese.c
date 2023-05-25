
#include<stdio.h>
#include<stdlib.h>
void create(int n);
void display();
void rev(int count);
int value,n;

struct node
{
    int data;
    struct node *next;

}*new,*temp,*tail,*head;
void main()
{printf("Enter number of elements :");
scanf("%d",&n);
create(n);
display();
rev(n);

}

void create(int n)
{

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
void rev(int count)
{
temp=head;


while(count>0)
{


    while(temp->next->next!=head)
    {
      temp=temp->next;
    }

     printf("%d ",temp->next->data);
     temp->next=temp->next->next;
count--;
}
}
