#include<stdio.h>

void main()
{
int arr[8]={1,1,1,1,1,1,0,1};
int res=0;
if((arr[0]+arr[1]+arr[2]<arr[3]+arr[4]+arr[5]))
{
    if(arr[0]>arr[1])
    {
        res=arr[1];
    }
    else if(arr[1]<arr[0])
    {
        res=arr[0];
    }
    else{
        res=arr[2];
    }
}
else if((arr[0]+arr[1]+arr[2]>arr[3]+arr[4]+arr[5]))
{
    if(arr[3]>arr[4])
    {
        res=arr[4];
    }
    else if(arr[3]<arr[4])
    {
        res=arr[3];
    }
    else
    {
        res=arr[5];
    }
}
else
{
    if(arr[6]>arr[7])
    {
        res=arr[7];
    }
    else
    {
        res=arr[6];
    }
}

printf("%d",res);
}
