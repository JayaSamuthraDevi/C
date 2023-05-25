#include<stdio.h>
#include<stdlib.h>

struct node* create();

void display();
int check();
char value;
char pos;
int v=0;

struct node
{
    char data;
    struct node *next,*prev;

}*temp,*head,*tail,*new,*str1 ,*str2,*temp1,*temp2;
void main()
{
str1 =create();
str2 =create();
 v=check();
display();
printf("%d",v);

}
struct node* create()
{
    head=NULL;
    char n[50];
    printf("enter no.of elements in dlist :");
    scanf("%s",&n);
    for(int i=0;i<strlen(n);i++)
    {

new=(struct node*)malloc(sizeof(struct node));
value=n[i];

new->data=value;
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
return head;
}


void display()
{
    temp=head;
    while(temp!=NULL)
    {
        printf("%c ",temp->data);
        temp=temp->next;
    }
}

int check(struct node*S,struct node *T)
{
    int count=0;
    temp1=str1;
    temp2=str2;
    while(temp1!=NULL)
    {
    while(temp2!=NULL)
    {
        if(temp1->data==temp2->data)
        {
        count++;
        }
        temp2=temp2->next;
    }
    temp1=temp1->next;
    }
    return count;
}
