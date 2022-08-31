#include <stdio.h>
int max(int x, int y)
{
    return x > y ? x : y;
}

int min(int x, int y)
{
    return x > y ? y : x;
}
int comp(int a, int b, int (*ptr)())
{
    return (*ptr)(a, b);
}
int main()
{
    int p, q, ans, choice;
    printf("PLEASE ENTER THE FIRST NUMBER : ");
    scanf("%d", &p);
    printf("\nPLEASE ENTER THE SECOND NUMBER : ");
    scanf("%d", &q);
again:
    printf("\n1.MINIMUM\t\t2.MAXIMUM\n");
    scanf("%d", &choice);
    if (choice == 1)
    {
        ans = comp(p, q, &min);
    }
    else if (choice == 2)
    {
        ans = comp(p, q, &max);
    }
    else
    {
        printf("PLEASE ENTER VALID NO\n");
        goto again;
    }
    printf("THE MAXIMUM NO IN THE TWO IS : %d \n", ans);
}
