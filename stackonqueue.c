#include<stdio.h>
#define size 5
int top=-1,top1=-1,arr[size],arr1[size];
void enqueue()
{
    int ele;
    if(top==size-1)
    {
        printf("Overflow");
    }
    else
    {
        top++;
        printf("Enter the data:");
        scanf("%d",&ele);
        arr[top]=ele;
    }
}
void dequeue()
{
    int j=top;
    for(int i=j;i>=0;i--)
    {
        top1++;
        arr1[top1]=arr[i];
        arr[i]=0;
        top--;
    }
    printf("%d deleted",arr1[top1]);
    top1--;
    j=top1;
    for(int i=j;i>=0;i--)
    {
        top++;
        arr[top]=arr1[i];
        arr1[i]=0;
        top1--;
    }

}
void display()
{
    for(int i=0;i<=top;i++)
    {
       printf("%d ",arr[i]);
    }
}
int main()
{
    printf("Operations:\n1.ENQUEUE\n2.DEQUEUE\n3.DISPLAY\n4.EXIT\n");
    int c=1;
    while(c!=0)
    {
        int choice;
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:enqueue();
                    break;
            case 2:dequeue();
                    break;
            case 3:display();
                    break;
            case 4:exit(0);
        }
    }



}
