#include<stdio.h>

struct node
{
    char *data;
    struct node *next;
}*new,*head,*tail,*temp,*temp1,*h1;
int count=0;
struct node * create(char s[]);
void split(char str[]);
void display();void arrange();
//void push(char s[]);


void main()
{
    int t;
    scanf("%d",&t);
    char str[100];
    for(int i=0;i<t;i++)
    {

        scanf("%s",&str);
        //printf("%d",strlen(str));
        split(str);

    }




display();
if(count==-1)
{
    printf(count);
}

}

void split(char str[])
{
head=NULL;
tail=NULL;
    for(int i=0;i<strlen(str);i++)
    {

        char s=str[i];
         h1=create(s);
    }
    arrange();

}

struct node* create(char s[])
{

    new=(struct node*)malloc(sizeof(struct node));
    new->data=s;
    new->next=NULL;
    if(head==NULL)
    {

        head=new;
        tail=new;
        temp=new;

    }
    else
    {
        tail->next=new;
        tail=new;
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
printf("\n");
}
void arrange()
{
   temp=head;

while(temp->next!=NULL)
{
    temp1=temp->next;


int a;

       if(((temp->data)!=(temp1->data))&&(a!=temp->data))
       {
            a=temp->data;
           temp->data=temp1->data;
           temp1->data=a;


}

temp=temp->next;


}
}





