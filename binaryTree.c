#include<stdio.h>
#include<stdlib.h>
      struct node
     {
          int data;
          struct node *left, *right;
      };
       void inorder(struct node* temp);
      struct node *create();
      void main()
    {
       struct node *root;
       root = create();
       //inorder(root);
    }

    void inorder(struct node* temp)
{
    if(temp==0)
    {
        return ;
    }
    inorder(temp->left);
    printf("%d",temp->data);
    inorder(temp->right);

}

struct node *create()
{
   struct node *temp;
   int data;
   int sum=0;
   int choice;
   temp = (struct node *)malloc(sizeof(struct node));
   printf("Press 0 to exit\n");
   printf("\nPress 1 for new node");
   printf("\nEnter your choice : ");
   scanf("%d",&choice);
   if(choice==0)
{
return 0;
}
else
{
   printf("Enter the data:");
   scanf("%d", &data);

   sum=data;

   temp->data = data;
   printf("Enter the left child of %d", data);
   temp->left = create();
printf("Enter the right child of %d", data);
temp->right = create();



return temp;
}
}
/*
#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node *left,*right;
}*root,*new,*temp;

struct node* create();
void preorder(struct node* root);
void inorder(struct node* root);
void postorder(struct node* root);

void main()
{
root=create();

inorder(root);
//preorder(root);
//postorder(root);
}
struct node* create()
{
    int x;
    new=(struct node*)malloc(sizeof(struct node));
    printf("-1 for no node :\n ");

    scanf("%d",&x);

    if(x==-1)
    {
        return 0;
    }
    new->data=x;

    printf("enter left child: %d\n",x);

    new->left=create();
    printf("enter right child :\n");

    new->right=create();
    return new;

}


void inorder(struct node* temp)
{
    if(temp==0)
    {
        return ;
    }
    inorder(temp->left);
    printf("%d",temp->data);
    inorder(temp->right);

}

void preorder(struct node* root)
{
    if(root==NULL)
    {
        return ;
    }
    printf("%d",root->data);
    preorder(root->left);
    preorder(root->right);

}
void postorder(struct node* root)
{
    if(root==0)
    {
        return ;
    }
    postorder(root->left);
    postorder(root->right);
    printf("%d",root->data);

}
*/
