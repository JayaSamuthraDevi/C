#include <stdio.h>

void main()
{
    //original array
    char a[]={'a','b','a','a','b','c'};


    //new array


    int j=0;
    int n=sizeof(a)/sizeof(a[0]);
    int size=(n*2)+1;
    char newa[size];
    for(int i=0;i<n;i++)
    {

        newa[j]='#';
        newa[j+1]=a[i];

        j=j+2;
        newa[j]='#';
    }
    //printing new array
    for(int j=0;j<size;j++)
    printf("%c",newa[j]);



   //new zeroarray
    int temp[size];
    for(int j=0;j<size;j++)
    {
        temp[j]=0;
    }
printf("\n");
for(int k=0;k<size;k++)
    printf("%d",temp[k]);



    //check front and back elements

    for(int i=0;i<size;i++)
    {
        int count=0;
        printf("hi");
        if(i==0)
        {
            temp[i]=count;
             printf("hi");
        }
        int j=i;


if(i==2)
{
           if(newa[i-1]== newa[j+1])
       {
          count++;
            printf("hi");
            temp[i]=count;
       }
}

           j++;




        if(i<size)
        {break;
        }
    }



printf("\n");
     for(int j=0;j<size;j++)
     {

    printf("%d",temp[j]);
     }


}
