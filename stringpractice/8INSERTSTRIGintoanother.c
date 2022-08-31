#include <stdio.h>
#include <string.h>
void SMALLINDEX(char strb[], char strs[], int n)
{
    int small = 0, big = 0;
    for (int i = 0; i < strlen(strb) + strlen(strs); i++)
    {
        if (i >= n - 1 && strs[small] != '\0')
        {
            if (small == strlen(strs) - 1)
            {
                printf("%c ", strs[small++]);  // for the last smalstring character space;
            }
            else
            {
                printf("%c", strs[small++]);
            }
        }
        else
        {
            printf("%c", strb[big++]);
        }
    }
}
int main()
{
    int n;
    char strsmall[15], strbig[100];
    printf("PLEASE ENTER THE BIG STRING : ");
    gets(strbig);
    printf("\nPLEASE ENTER THE SMALL STRING : ");
    gets(strsmall);
    printf("\nPLEASE ENTER THE POSITION TO PUT SECOND STRING : ");
    scanf("%d", &n);
    SMALLINDEX(strbig, strsmall, n); // printing the string
    return 0;
}