#include <stdio.h>
int main()
{
    int m, n, count1 = 0, count0 = 0;
    printf("please enter what is size of raw is matrix : ");
    scanf("%d", &m);
    printf("\nplease enter what is size of collon is matrix : ");
    scanf("%d", &n);
    int diognal[m][n];
    if (m == n)
    {
        // taking the alliment
        printf("\nplease enter the elliment\n");
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                scanf("%d", &diognal[i][j]);
            }
        }
        // checking
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (diognal[i][j] == 1)
                {
                    count1++;
                }
                if (diognal[i][j] == 0)
                {
                    count0++;
                }
            }
        }
        if (count1 == m)
        {
            if (count0 == (m * n) - m)
            {
                printf("your matrics is diognal\n");
            }
            else
            {
                printf("your matrics is not a diognal\n");
            }
        }
        else
        {
            printf("your matrics is not a diognal matrics\n");
        }
    }
    else
    {
        printf("FOR DIOGRAL ROW SHOULD BE = TO COLLON :");
    }
    return 0;
}