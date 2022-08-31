// hnnbhnsv n
#include <stdio.h>
int primen(int n)
{
    int count = 0, c = 0;
    for (int i = 2; count < n; i++)
    {
        c = 0;
        for (int j = 2; j <= i; j++)
        {
            if (i % j == 0)
            {
                c++;
            }
        }
        if (c == 1)
        {
            printf("%d,", i);
            count++;
        }
    }
}
int main()
{
    int n;
    printf("please enter the how many prime no you want : ");
    scanf("%d", &n);
    printf("\nTHE %d prime no is : ", n);

    primen(n);

    return 0;
}