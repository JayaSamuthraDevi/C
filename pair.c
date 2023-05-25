#include<stdio.h>
   void main()
    {

       printf("Enter No of Sets:");

        scanf("%d",&n);
        int arr[n*2];
        for(int i=0;i<n*2;i+=2)
        {
            System.out.println("Enter Sets:");
            arr[i]=s.nextInt();
            arr[i+1]=s.nextInt();
        }
        int next=0;
        for(int i=0;i<n*2;i+=2)
        {
            if(next<arr[i])
            {
                next=arr[i+1];
                System.out.println("OUTPUT:"+arr[i]+" "+arr[i+1]);
            }
        }
    }

