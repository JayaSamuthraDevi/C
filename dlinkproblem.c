#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct node
{
    int data;
    struct node *prev;
    struct node *child;
    struct node *next;
};
struct node *insert(struct node *head, int data)
{
    struct node *new_node = malloc(sizeof(struct node));
    new_node->data = data;
    new_node->next = NULL;
    new_node->child = NULL;
    if (head == NULL)
    {
        head = new_node;
        return head;
    }
    else
    {
        struct node *tail = head;
        while (tail->next != NULL)
        {
            tail = tail->next;
        }
        tail->next = new_node;
        new_node->prev = tail;
        tail = new_node;
        return head;
    }
}
struct node *create_list(struct node *head, int arr[], int size)
{
    int i;
    for ( i = 0; i < size; i++)
    {
        head = insert(head, arr[i]);
    }
    return head;
}

void display(struct node *head)
{
    struct node *temp = head;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

void print_all(struct node *head)
{
    struct node *temp = head;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        if (temp->child != NULL)
            print_all(temp->child);
        temp = temp->next;
    }
}
struct node *flat_list(struct node *head)
{
    struct node *curr = head;
    struct node *tail = head;
    while (curr != NULL)
    {
        struct node *child_node = curr->child;
        struct node *next_node = curr->next;
        if (child_node != NULL)
        {
            tail = flat_list(child_node);
            curr->next = child_node;
            child_node->prev = curr;
            tail->next = next_node;
            if (next_node)
                next_node->prev = tail;
            curr = tail;
        }
        else
        {
            curr = curr->next;
            if (curr)
                tail = curr;
        }
    }
    return tail;
}
void main()
{
    int arr1[] = {1, 2, 3, 4, 5, 6};
    int arr2[] = {7, 8, 9, 10};
    int arr3[] = {11, 12};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    int size3 = sizeof(arr3) / sizeof(arr3[0]);

    struct node *head1 = NULL;
    struct node *head2 = NULL;
    struct node *head3 = NULL;
    head1 = create_list(head1, arr1, size1);
    head2 = create_list(head2, arr2, size2);
    head3 = create_list(head3, arr3, size3);
    head1->next->next->child = head2;
    head2->next->child = head3;
    flat_list(head1);
    display(head1);
}

/*#include<stdio.h>
#include<stdlib.h>
struct node
{
    struct node *prev;
    int data;
    struct node *next;
    struct node *child;
}*new,*tail=NULL,*temp,*newchild,*child,*head1,*head2,*head3,*nextnode,*current;
struct node*head=NULL; //variable defining
struct node* create(int n,int arr[]);
struct node* display(struct node* head);

void main()
{
    /*
    int n,num,a[];
    printf("array");
    scanf("%d",&num);
    for(int i=0;i<num;i++)
    {
        scanf("%d",n);
    for(int i=0;i<n;i++)
    {
       scanf("%d",a[i]);
    }
        create(a);
    }
    *//*
    int a[]={1,2,3,4,5,6};
    int b[]={7,8,9,10};
    int c[]={11,12};
int x=sizeof(a)/sizeof(a[0]);
int y=sizeof(b)/sizeof(b[0]);
int z=sizeof(c)/sizeof(c[0]);

    head1=create(x,a);
    head2=create(y,b);
 head3=create(z,c);

//printf("\n%d\n",head1);
//printf("\n%d\n",head2);
//printf("\n%d\n",head3);

head1->next->next->child=head2;
head2->next->child=head3;


    display(head1);
}

struct node* create(int n,int arr[])
{
    int i,value;
head=NULL;
    for(i=0;i<n;i++){
        new= (struct node*)malloc(sizeof(struct node));
    //printf("Enter the value to be inserted:\n");

    value=arr[i];
    new->prev=NULL;
    new->child=NULL;
    new->data=value;
    new->next=NULL;
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
    //printf("%d",head);
    return head;
}


struct node* display(struct node* head)
{
tail=head;
current=head;
while(current)
{
    newchild=current->child;
    nextnode=current->next;
if(newchild)
{

   struct node*tail_child=display(newchild);
    tail_child->next=nextnode;


    current->next=newchild;
    newchild->prev=current;
    tail_child->next=nextnode;

    if(nextnode)


        nextnode->prev=tail_child;
    current=tail_child;
}
else{
    current=current->next;
    if(current)
        tail_child=current;
}
}
current=current->next;
return tail;
}




/*temp=head1;
    printf("The elements are:\n");
    while(temp!=NULL)
    {

        printf("%d\n",temp->data);

        if(temp->child!=NULL)

        {

            current=temp;
            printf("%d\n",temp->child->data);
            temp=temp->child;
            temp=temp->next;



        }
        else
        temp=temp->next;
        tail=temp;

        */
