#include <stdio.h>
#include <ctype.h>
int main()
{
    char c;
    scanf("%c",&c);
    if(isupper(c))
    {
        c=c+'a'-'A';
    }
    printf("%c\n",c);

    return 0;
}