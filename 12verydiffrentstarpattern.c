#include <stdio.h>
int pattern2(int n)
{
    int p, m = 1;
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
        for (int j = 1; j <= i - 1; j++)
        {
            printf("  ");
        }

        for (int j = 1; j <= 1; j++)

            printf("*");

        for (int j = 1; j <= n - 2 * i; j++)
        {
            printf("  ");
        }
        if (i != p)
        {
            printf("*");
        }

        printf("\n");
    }

    for (int i = n / 2; i >= 1; i--)

    {
        for (int j = i - 1; j >= 1; j--)
        {
            printf("  ");
        }
        printf("*");
        for (int j = 1; j <= m; j++)
        {
            printf("  ");
        }
        m = m + 2;
        printf("*");
        printf("\n");
    }
}

int main()
{
    pattern2(31);
    return 0;
}
