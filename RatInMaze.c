#include<stdio.h>
int n;
int isValid(int a[n][n],int x,int y)
{
    if(((x>=0 && x<n) || (y>=0 && y<n)) && (a[x][y]==1))
        return 1;
    else
        return 0;
}
int maze(int a[n][n],int x,int y,int sol[n][n])
{
    if(x==n-1 && y==n-1 && a[x][y]==1)
    {
        sol[x][y]=1;
        return 1;
    }
    if(isValid(a,x,y)==1)
    {
        if(sol[x][y]==1)
            return 0;
        sol[x][y]=1;
        if(maze(a,x,y+1,sol)==1)
            return 1;
        if(maze(a,x+1,y,sol)==1)
            return 1;
        if(maze(a,x,y-1,sol)==1)
            return 1;
        if(maze(a,x-1,y,sol)==1)
            return 1;
        sol[x][y]=0;
        return 0;
    }
    return 0;
}
void solutionMaze(int a[n][n])
{
    int sol[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        sol[i][j]=0;
    }
    if(maze(a,0,0,sol)==0)
        printf("No, rat cannot reach the cheese.");
    else
    {
        printf("Yes, rat can reach the cheese.\n");
        for(int i=0;i<n;i++,printf("\n"))
        {
            for(int j=0;j<n;j++)
            printf("%d ",sol[i][j]);
        }
    }
}
int main()
{
    scanf("%d",&n);
    int a[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        scanf("%d",&a[i][j]);
    }
    solutionMaze(a);
    return 0;
}
