#include <stdio.h>
int sumd(long long int n)
{
    long long int m;
    int digit[25], i = 0;
    while (n != 0)
    {
        m = n % 10;
        digit[i] = m;
        i++;
        n /= 10;
    }
    for (int j = 1; j < i; j++)
    {
        digit[0] += digit[j];
    }
    printf("THE SUM OF ALL DIgIT : %d \n", digit[0]);
}
int main()
{
    long long int m;
    printf("please enter the number which digit you want to calculate : ");
    scanf("%lld", &m);
    sumd(m);
    return 0;
}