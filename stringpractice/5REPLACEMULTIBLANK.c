#include <stdio.h>
#include <string.h>
int main()
{
    char str[100], temp;
    printf("PLEASE ENTER YOUR STRING WITH MULTIPLE BLANKS : ");
    gets(str);
    for (int i = 0; (str[i] != '\0'); i++)
    {
        if ((str[i] == ' ' || str[i] == '\t')&&(str[i+1]!=' '&& str[i+1]!='\t'))       //  because if str[i+1]==blank and than not character dont print space
        {
        printf(" ");
        }
        if (str[i] != ' ' && str[i] != '\t')
        {
            putchar(str[i]);
        }
    }

    return 0;
}