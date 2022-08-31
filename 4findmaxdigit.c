#include <stdio.h>
int maxdigit(long long int n)
{
    long long int m, k = n;
    int digit[25], i = 0,max=0 ,min = 9;
    while (n != 0)
    {
        m = n % 10;
        digit[i] = m;
        i++;
        n /= 10;
    }

    for (int j = 0; j < i; j++)
    {
        if (digit[j] < min)
        {
            min = digit[j];
        }
    
        if (digit[j] > max)
        {
            max = digit[j];
        }
    }
    printf("the maximum number among all the digit of %lld is : %d\n", k, max);
    printf("the minimum number among all the digit of %lld is : %d\n", k, min);
}
int main()
{
    long long int m;
    printf("please enter the number which digit you want to calculate : ");
    scanf("%lld", &m);
    maxdigit(m);
    return 0;
}