
#include<stdio.h>
#include<math.h>



int numSquares(int n) {

    int dp[n+1];
    dp[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        dp[i] = i;
    }

    // Compute dp values
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j*j <= i; j++)
        {
            dp[i] = fmin(dp[i], dp[i-j*j]+1);
        }
    }

    return dp[n];
}

int main() {
    int n;
    scanf("%d",&n);
    int result = numSquares(n);
    printf("%d\n", result);
    return 0;
}













/*

#include <stdio.h>
#include <math.h>



int check(int n)
{

    if(n<3)
    {
        return 3;
    }

    int res=n;
    for(int i=1;i<=n;i++)
    {
        int temp=i*i;
        if(temp>n)
        {
            break;
        }
        else
        {
            res=fmin(n,1+ check(n-temp));
        }
    }

    return res;
}
void main()
{
int n;
scanf("%d",&n);
int ans = check(n);
printf("%d",ans);
}
*/
