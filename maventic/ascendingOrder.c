#include<stdio.h>
//declaring node structure
struct node
{
    int data;
    struct node *next;
}*head,*tail,*temp1,*temp2,*temp,*new;
//to create linked list
void create()
{
    int n;
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
        }
    }
}
//arranging in ascending order
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
//to display
void display()
{
    temp=head;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }

}
//find second element
void element(int k)
{temp=head;
for(int i=0;i<k-1;i++)
{
    temp=temp->next;
}
printf("%d",temp->data);
}


void main()
{
    create();
    order();
    display();
    int k;
    printf("\nEnter the position to print the element at that position: \n");
    scanf("%d",&k);
    element(k);

}
