#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node *next;
}*head,*temp,*front,*new;
int value,choice=1,n,a;
void display();
void insertFront();
void insertEnd();
void find();
int element;
//for display
void display(){

temp=head;
while(temp!=NULL)
{
    printf("%d ",temp->data);
    temp=temp->next;
}
}
void insertFront()
{
printf("\n value to be inserted at front:\n");

    new=(struct node*)malloc(sizeof(struct node));
    scanf("%d",&value);
    new->data=value;
    new->next=head;
    head=new;

}

void find()
{

printf("\nElement to find in list : \n");
scanf("%d",&element);
    temp=head;
    int count=0;
    while(temp!=NULL)
    {
        if(temp->data==element)
        {
           count++;
        }

    temp=temp->next;
    }
     if(count>0)
        {
            printf("Found");

        }
        else{
            printf("Not Found");
        }
}

void insertEnd()
{

printf("\n value to be inserted at front:\n");

    new=(struct node*)malloc(sizeof(struct node));
    scanf("%d",&value);
    new->data=value;

    temp=head;
    while(temp!=NULL)
    {
        temp=temp->next;

    }

    temp->next=new;



}

int main()
{
    //declaring variable
struct node *new;
//printf("enter no.of elements in list :");
//scanf("%d",&n);

while(choice==1)
{
new=(struct node*)malloc(sizeof (struct node));
printf("enter value ");
scanf("%d",&value);
new->data=value;
new->next=NULL;
if(head==NULL)
{
    head=new;
    temp=new;

}
else{

    temp->next=new;
    temp=new;

}

printf("enter choice(1/0) :");
scanf("%d",&choice);
//n--;





}
//display();
//insertFront();
//insertEnd();
display();


find();
return 0;
}
