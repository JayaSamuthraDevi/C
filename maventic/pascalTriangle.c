#include<stdio.h>

void main()
{
int n;
scanf("%d",&n);
int k=n;
for(int i=1;i<=n;i++)
{
     int a=0,b=0;
    for(int j=1;j<=i;j++)
    {
       if(j>1)
       {
         printf("%d \n",i+a+b);
        a=i;
        b=i;
       }



    }


}

}
