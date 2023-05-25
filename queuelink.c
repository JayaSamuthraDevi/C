#include<stdio.h>
#include<stdlib.h>
void enqueue();
void dequeue();
void display();
struct node{
int data;
struct node *next
}*front,*rear,*new,*temp;

void main()
{
    int ch;

    while(1)
    {
    printf("\n1.enqueue\n2.dequeue\n3.exit\n");
    scanf("%d",&ch);
    switch(ch)
    {

    case 1:

        enqueue();
        break;
    case 2:
        dequeue();
        break;
    case 3:
        display();
        break;
    case 4:
        exit(0);
    }
    }
}

void enqueue()
{
while(1)
{


int a;

scanf("%d",&a);
if(a<0)
{
    main();
}
new=(struct node*)malloc(sizeof(struct node));
    new->data=a;
    new->next=NULL;
    if(rear==NULL)
    {

        front=new;
        rear=new;
    }
    else
    {
        rear->next=new;
        rear=new;
    }
}


}

void dequeue()
{
    printf("\n%d Deleted element\n",front->data);

    front=front->next;

}

void display()
{

    temp=front;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }

}
