#include<stdio.h>

void main()
{
    int n;
    scanf("%d",&n);
    char arr[n];
    //get values
    for(int i=0;i<n;i++)
    {
        scanf("%s",&arr[i]);
    }
    //print
   /* for(int i=0;i<n;i++)
    {
    printf("%c",arr[i]);
    }
    */

    //check
    int count1=0,count2=0,count3=0;




    for(int i=0;i<n;i++)
    {
    if(arr[i]=='(')
    {
        count1++;
    }
    if(arr[i]==')')
    {

        count2++;
    }
    if(arr[i]=='*')
    {
        if(i==0)
        {
            arr[i]='(';
            count1++;
        }
        if(i==n-1)
        {
            arr[i]=')';
            count2++;
        }
        count3++;
    }

    }

    if((count1==count2)||(count1+count3==count2)||(count1==count2+count3))
    {
        printf("Yes");
    }
    else
    {
    printf("No");
    }
}

