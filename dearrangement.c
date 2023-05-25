
#include <stdio.h>

int derangements(int n)
{

    if (n <= 1) {
        return 0;
    }

    int T[n + 1];


    T[1] = 0, T[2] = 1;

    for (int i = 3; i <= n; i++)
    {
        T[i] = (i - 1) *(T[i - 1] + T[i - 2]);
    }


    return T[n];
}

int main(void)
{
    int n ;
    scanf("%d",&n);

    printf("The total number of derangements of a %d element set is %d",
            n, derangements(n));

    return 0;
}






































// Recursive function to count the derangements of an n–element set
    // create an auxiliary array to store solutions to the subproblems
// base case
    // fill the auxiliary array `T` in a bottom-up manner using the recurrence relation
    // return the total number of derangements of an n–element set
