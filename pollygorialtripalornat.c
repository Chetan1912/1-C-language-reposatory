#include <stdio.h>
void poly()
{
    int pol;
    printf("THE POLYGORIAN TRIPLET 1-100 :\n");
    for (int i = 1; i <= 100; i++)
    {
        for (int j = 1; j <= 100; j++)
        {
            pol = i * i + j * j;
            for (int k = 1; k <= 100; k++)
            {
                if (pol == k * k)
                {
                    printf("%d,%d,%d\n", i, j, k);
                }
            }
        }
    }
}
int main()
{
     poly();

    return 0;
}