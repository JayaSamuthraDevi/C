#include<stdio.h>

int check(int n)
{
    int arr[5];
    int sum=0;
    if(n==0)
        return 0;
    if(n==1)
    return 1;

    for(int i=2;i<n;i++)
    {

        arr[0]=0;
        arr[1]=1;
        sum=arr[i-1]+arr[i-2];
        printf("% d ",sum);

    }
}

void main()
{


int n;
scanf("%d",&n);
check(n);

for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++)
{
    printf("%d",arr[i]);
}

}
