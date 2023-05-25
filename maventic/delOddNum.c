#include<stdio.h>
//declaring node structure
struct node
{
    int data;
    struct node *next;
}*head,*tail,*temp1,*temp2,*temp,*new;
//to create linked list
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
        }
    }
}
//delete odd indexed numbers
void delOdd(int n)
{
   temp=head;

    while(temp->next!=NULL)
   {

       printf("%d ",temp->next->data);
       temp=temp->next->next;
   }




}


void main()
{
     int n;
    scanf("%d",&n);
    create(n);
    delOdd(n);



}
