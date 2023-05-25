#include<stdio.h>
void count(int n)
{
    int count=0;
    int m = 0, k = 0, base = 1;

        while (n > 0)
        {
            k = n % 10;//remainder
            n = n / 10;//reducing n
            if (k > 1)
            {
                count += (n+1) * base;
            }
            else if (k < 1)
            {
                count += n*base;
            }
            else //runs when n=1
            {
                count += n*base+m+1;
            }
            m += k*base;
            base *= 10;
        }

printf("%d",count);
}
void main()
{
int n;
scanf("%d",&n);

count(n);
}

