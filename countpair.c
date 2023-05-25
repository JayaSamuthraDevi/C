#include<stdio.h>
struct node{
int data;
struct node *next;
}*head,*tail,*new,*temp,*temp1;

void create();
void count();

void main()
{
    create();

    count();
}

void create()
{
int n;
    printf("Enter number of elements :");
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
            tail =new;

        }
    }
}

void count()
{
    int count1=0;
    temp=head;

    while(temp!=NULL)
    {
    temp1=temp;
        while(temp1!=NULL)
        {


        if((temp->data)>(temp1->data))
        {
            count1++;


        }
        temp1=temp1->next;
        }
        temp=temp->next;
    }
printf("The pair count is %d",count1);
}
