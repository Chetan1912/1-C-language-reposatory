#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    char temp[15];
    printf("please enter how manny words you wanted to sort !!!!!\n");
    scanf("%d", &n);
    getchar();
    char sort[n][15];
    printf("please enter the words : ");
    for (int i = 0; i < n; i++)
    {
        printf("\nWORD %d : ", i+1);
        gets(sort[i]);
    }
    for (int i = 0; i < n - 1; i++) /// SORTING THE STRING;
    {
        for (int j = i + 1; j <n; j++)
        {
            if (strcmp(sort[i], sort[j]) == 1)
            {
                strcpy(temp, sort[i]);
                strcpy(sort[i], sort[j]);
                strcpy(sort[j], temp);
            }
        }
    }
    // printing the sorted array;
    printf("THE SORTED ARRAY IS : \n");
    for (int i = 0; i <= n; i++) // i<=n because it is a 2d string sort[n][15]; n is the row no therefore;
    {
        printf("%s\n", sort[i]);
    }

    return 0;
}