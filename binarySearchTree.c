
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
}*newnode,*root,*temp;
void display(struct node*root);
void insert();
void search(struct node *newnode,struct node *root);
int main()
{ int c,l;
    while(1)
    {


    printf("\n1.display\n2.insert\n3.delete\n4.exit\n\n");
    scanf("%d",&c);
    switch(c)
    {
    case 1:
          display(root);
          break;
        case 2:
          insert();
          break;
         case 3:
          delete();
          break;
          case 4:
          exit(0);
          break;

    }}

}
void insert()
{
    int choice=1;
    while(choice==1)
    {
        newnode=malloc(sizeof(struct node));
        newnode->left=0;
        newnode->right=0;
        printf("Enter the data");
        scanf("%d",&newnode->data);
       if(newnode->data>=0)
       {
        if(root==0)
        {
            root=newnode;
        }
        else
        {
            search(newnode,root);
        }
       }
       else
       {
           choice=0;
       }

    }
}
void search(struct node *newnode,struct node *root)
{
    if((newnode->data)<(root->data)&&root->left==0)
    {
        root->left=newnode;
    }
    if((newnode->data)>(root->data)&&root->right==0)
    {
        root->right=newnode;
    }
    if((newnode->data)<(root->data)&&root->left!=0)
    {
        search(newnode,root->left);
    }
    if((newnode->data)>(root->data)&&root->right!=0)
    {
        search(newnode,root->right);
    }
}
void display(struct node *root)
{
    if(root==0)
    {
        return;
    }
    else
    {
        display(root->left);
        printf("%d ",root->data);
        display(root->right);
}
}

void delete()
{   int element;
    printf("Enter the element to be deleted ");
    scanf("%d ",&element);
    temp=root;


    if (temp->left==0&&temp->right==0)
    {

        free(root);
    }
    if(temp->left!=0&&temp->right==0)
    {
        root=temp->left;

    }
    if(temp->left==0&&temp->right!=0)
    {
        root=temp->right;

    }
     if(temp->left!=0&&temp->right!=0)
    {
        temp->right->left=temp->left;
        root=temp->right;
        free(temp);

    }

}
