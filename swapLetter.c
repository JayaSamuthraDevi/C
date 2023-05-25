#include<stdio.h>

struct node
{
    char data;
    struct node *next;
    struct node *prev;

}*temp1,*temp2,*new,*head1,*head2;

struct node* create(char a1[50])
{
    struct node * head=NULL;
    struct node * tail=NULL;
    for(int i=0;i<strlen(a1);i++)
    {
        new=(struct node *)malloc(sizeof(struct node));
        new->data =a1[i];
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
            tail->next=NULL;
        }

    }
    return head;

}

void swap()
{
temp1=head1;
temp2=head2;
char x,y;
int count=0;
while(temp1!=NULL&&temp2!=NULL)
{

    if(temp1->data==temp2->data)
    {

        temp1=temp1->next;
        temp2=temp2->next;

    }
    else
    {
            x=temp1->data;
            y=temp2->data;
        if(y!=' ')
        {
            if(y==temp1->data)
        {
            count++;
        }
        }
    }
    temp1=temp1->next;
    temp2=temp2->next;
}
if(count==1)
{

printf("true");

}
else
{

    printf("false");
}
}


void main()
{
char s[50],res[50];
scanf("%s",&s);
scanf("%s",&res);

head1=create(s);

head2=create(res);

swap();
}

