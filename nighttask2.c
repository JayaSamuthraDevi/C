
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
struct node{
char data;
struct node *next;
}*head,*temp,*new,*tail;
int value,n,a;




int main()
{
    //declaring variable

int n;
char element;
scanf("%d",&n);

for(int i=0;i<n;i++)
{
scanf("%s",&element);
int elevalue=element;
if(isdigit(element)==0)
{
    new=(struct node*)malloc(sizeof(struct node));

    new->data=element;
    new->next=NULL;
    if(head==NULL)
    {
        head=new;
        tail=new;
    }
    else{
        tail->next=new;
        tail=new;
    }

}
else
{
    for(int i=1;i<element;i++)
    {
           new=(struct node *)malloc(sizeof(struct node));
           new->data=elevalue;
           new->next=NULL;

    if(head==NULL)
    {
        head=new;
        tail=new;
    }
    else{
        tail->next=new;
        tail=new;
    }
    }
}

}


return 0;
}

