#include <stdio.h>
#include <string.h>
int main()
{
    char str[50], len;
    printf("please enter your string : \n");
    gets(str);
    len = strlen(str);
    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < len - i; j++)
        {
            putchar(str[j]);
        }

        if (i != 0)
        {
            for (int j = 1; j <= 2 * i - 1; j++)
            {
                printf(" ");
            }
        }
        if (i == 0)
        {
            for (int j = len - 2; j >= 0; j--)
            {
                putchar(str[j]);
            }
        }
        else
        {
            for (int j = len - i-1; j >= 0; j--)
            {
                putchar(str[j]);
            }
        }
         printf("\n");
    }
   
    return 0;
}