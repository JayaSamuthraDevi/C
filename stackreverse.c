#include<stdio.h>
#include<stdlib.h>
struct node
{
    char *data;
    struct node*next;
}*head,*temp,*tail,*top=NULL;
void create(char word[])
{

    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data=word;
    newnode->next=NULL;
    if(top==NULL)
    {
        top=newnode;
    }
    else
    {
        newnode->next=top;
        top=newnode;
    }


}
void pop()
{
    display();
    temp=top;
    //while(temp!=NULL)

        printf("\n the deleted ele is %d",top->data);
        top=top->next;

    printf("\n");

}
void display()
{
    temp=top;
    if(top != NULL)
    {
     while(temp!= NULL)
        {
            printf("%s ",temp->data);
            temp=temp->next;
        }
    }
    else
    {
        printf("UNDERFLOW");
    }
}
void main()
{
    char s[1000];
    printf("enter the string \n");

    scanf("%[^\n]%*c",&s);
    char *a=strtok(s," ");
    while(a!=NULL)
    {
           create(a);
           a=strtok(NULL," ");
    }


   // pop();
    display();
}
