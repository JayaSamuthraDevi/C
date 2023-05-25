#include<stdio.h>
struct node
{
int data;
struct node *next;
struct node *prev;
}*head,*tail,*new,*temp,*temp1,*temp2;

void create();
void display();
void del(int k);
void order();
void main()
{
create();
int k;
printf("\n Enter num to delete in list\n");
scanf("%d",&k);
del(k);
printf("\nLinked list after deletion of the given num :\n");
order();
display();
printf("\nAscending order :\n");
order();
display();
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
//deletes the number in linked list
void del(int k)
{
    temp=head;
    while(temp!=NULL)
    {
        if(temp->data==k)
        {

            temp->prev->next=temp->next;
            break;

        }

    else{

        temp=temp->next;
    }
    }





}
void order()
{
   temp1=head;

   while(temp1!=NULL)
   {
temp2=head;
       while(temp2!=NULL)
       {
           if(temp1->data<temp2->data)
           {
               int dup=temp1->data;
               temp1->data=temp2->data;
               temp2->data=dup;
           }
           temp2=temp2->next;
       }
       temp1=temp1->next;
   }

}
