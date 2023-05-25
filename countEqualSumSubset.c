#include<stdio.h>

void main()
{
    int n,a;
    scanf("%d",&n);
    char arr[n];
    //get values
    for(int i=0;i<n;i++)
    {
        scanf("%s",&arr[i]);
    }

int sum=0;


    for(int i=0;i<n;i++)
    {
       sum+=arr[i];

    }

     printf("%d",sum);
}


