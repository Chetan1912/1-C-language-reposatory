#include <stdio.h>
int pattern(int n)
{
    int p;
    if (n % 2 == 1)
    {
        p = (n / 2) + 1;
    }
    else
    {
        p = n / 2;
    }

    for (int i = 1; i <= p; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        for (int j = 1; j <= n - 2 * i; j++)
        {
            printf(" ");
        }
        if (i != p)
        {
            for (int j = i; j >= 1; j--)
            {
                printf("%d", j);
            }
            printf("\n");
        }
        else
        {
             for (int j = i-1; j >= 1; j--)
            {
                printf("%d", j);
            }
            printf("\n");
        }
        
    }

    for (int i = n / 2; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        for (int j = 1; j <=n-2*i; j++)
        {
            printf(" ");
        }
        for (int j = i; j >= 1; j--)
        {
            printf("%d", j);
        }
        printf("\n");
    }
}
int main()
{
    pattern(7);
    return 0;
}