#include <stdio.h>
int gcd(int m, int n)
{
    int samediv = 1;
    int i = 1; // every number is divisible by 1
begin:
    i++;

    if ((m % i == 0) && (n % i == 0)) // i must be divisible by both numbers
    {
        samediv = i;

        if (i == m + 1 || i == n + 1)
        {
            goto end;
        }
    }

    if (i <= m || i <= n)
    {
        goto begin;
    }

end:
    printf("THE LARGEST COMMON DEVIDOR IS %d", samediv);
}
int main()
{
    int n1, n2, c;
    printf("please enter the first no : ");
    scanf("%d", &n1);
    printf("\nplease enter the second no : ");
    scanf("%d", &n2);
    gcd(n1, n2);
    return 0;
}
// ********************************************************************
// or
// int main()
// {
//     int num1, num2;

//     printf("Enter the first number: ");
//     scanf("%d",&num1);
//     printf("Enter the second number: ");
//     scanf("%d",&num2);
//     while(num1!=num2)
//     {
//         if(num1 > num2)
//             num1 -= num2;
//         else
//             num2 -= num1;
//     }
//     printf("The GCD of the given numbers = %d",num1);
//     return 0;
// }