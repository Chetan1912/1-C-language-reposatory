#include <stdio.h>
#include <string.h>
int stringcmp(char strcom2[], char strcom1[])
{
    int equal1, equal2, match = 0, length = 0;
    for (int i = 0; strcom1[i] != '\0'; i++)
    {
        length++;
        equal1 = strcom1[i];
        equal2 = strcom2[i];
        if (equal2 == equal1)
        {
            match++;
        }
        else if (equal2 > equal1)
        {
            return 1;
        }
        else if (equal2 < equal1)
        {
            return -1;
        }
    }
    if (match == length)
    {
        return 0;
    }
}
int main()
{
    int c1,C2;
    char str1[50], str2[50];
    printf("please enter the first string you want to compare with another : ");
    gets(str1);
    printf("please enter the second string you want to compare with another : ");
    gets(str2);
    c1 = stringcmp(str1, str2);
    printf("COMPARISON WITH MY OWNERSHIP : ");
    printf("%d", c1);
    C2 = strcmp(str1,str2);
    printf("\nCOMPARISON WITH the function STRCMP : ");
    printf("%d", C2);

    return 0;
}