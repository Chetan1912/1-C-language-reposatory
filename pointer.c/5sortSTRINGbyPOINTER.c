#include <stdio.h>
#include <conio.h>
#include <malloc.h>
#include <string.h>
int len(char *str)
{
    int lean = 0;
    for (int i = 0; *(str++) != '\0'; i++)
    {
        lean++;
    }
    return lean;
}
int main()
{
    int n, length;
    char str[50], *temp;
    printf("please enter how manney name you want to sort\n");
    scanf("%d", &n);
    char *s[n];
    getchar();
    for (int i = 0; i < n; i++)
    {
        printf("NAME : %d : ", i + 1);
        gets(str);
        length = len(str);
        s[i] = (char *)malloc(length * sizeof(char) + 1); // spacifinf the memory for the program;
        strcpy(s[i], str);
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (strcmp(s[i], s[j]) > 0)
            {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }
    printf("SORTED ARRAY -->\n");
    for (int i = 0; i < n; i++)
    {
        printf("%s\n", s[i]);
    }
    getch();
}