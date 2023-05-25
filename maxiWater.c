#include<stdio.h>

void main()
{int n;
scanf("%d",&n);
int arr[n];
for(int i=0;i<n;i++)
{

    scanf("%d",&arr[i]);


}
int res=0,max=0;
for(int i=0;i<n;i++)
{
    res=arr[i]*(n-i-2);
   if(res>max)
   {

       max=res;
   }
}

printf("%d",max);
}
