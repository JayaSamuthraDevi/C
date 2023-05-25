#include<stdio.h>
void create(int n);
struct node
{
int data;
struct node*right;
struct node*left;

}*root,*temp,*new,*temp1,*tempd;

void display();
void main()
{
    int n;
    do{
        scanf("%d",&n);
        create(n);
    }while(n>0);
    display();
}

void create(int n)
{
        new=(struct node*)malloc(sizeof(struct node));
        new->data=n;
        new->right=NULL;
        new->left=NULL;
        int flag=0;
        if(root==NULL)
        {
            root =new;
            temp=new;
            temp1=new;
        }
        else
        {
            while(1)
            {


            if(temp->left==NULL)
            {
                temp->left=new;
    break;
            }
            else if(temp->right==NULL)
            {

                temp->right=new;
                flag=0;
                break;

            }
            else if(flag==0)
            {
                temp=temp->left;
                flag=1;
                break;

            }
            else
            {
            temp=temp1->right;
            flag=0;
            temp1=temp1->left;
            break;
            }
        }
        }

}

void display()
{
   tempd=root;
    int flag=0;


 printf("%d\n",tempd->data);



}


}


