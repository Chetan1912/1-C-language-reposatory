#include <stdio.h>
#include <string.h>
void convertintiger(char a[])
{
    int c, sign, offset, n;

    if (a[0] == '-')
    { // Handle negative integers
        sign = -1;
    }

    if (sign == -1)
    { // Set starting position to convert
        offset = 1;
    }
    else
    {
        offset = 0;
    }

    n = 0;

    for (c = offset; a[c] != '\0'; c++)
    {
        n = n * 10 + a[c] - '0';
    }

    if (sign == -1)
    {
        n = -n;
    }
    printf("THE STRING %s converted into INTEGER = %d", a, n);
}

int main()
{
    char integer[30];
    printf("PLEASE ENTER THE STRING OF NO YOU WANT TO CONVERT INTO INTEGER : ");
    gets(integer);
    convertintiger(integer);
    return 0;
}