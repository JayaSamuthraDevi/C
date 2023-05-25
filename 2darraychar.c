#include<stdio.h>


void main()
{
    int row,col;
    scanf("%d",&row);

    scanf("%d",&col);

    char arr[row+1][col+1];
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
              scanf("%s",&arr[i][j]);

        }

    }
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
              printf("%c",arr[i][j]);

        }
        printf("\n");

    }
    char a[20];
    scanf("%s",&a);
    //check
    int count=0;
    /*
    for(int i=0;i<strlen(a);i++)
    {

    for(int j=0;j<row;j++)
    {
        for(int k=0;k<col;k++)
    {
        if(arr[j][k]==a[i])
        {
            count++;
        }
    }
    }
    }
    */
    int i=0,j=0;
    for(int k=0;k<strlen(a);k++)
    {


            if(arr[i+1][j]==a[k])
            {
                i=i+1;
                count++;
            }
            if(arr[i][j+1]==a[k])
            {
                j=j+1;
                count++;
            }
            if(arr[i-1][j]==a[k])
            {
                i=i-1;
                count++;
            }
            if(arr[i][j-1]==a[k])
            {
                j=j-1;
                count++;
            }

    }


    if(count==strlen(a))
    {

        printf("true");
    }
    else
    {

        printf("false");
    }
}
