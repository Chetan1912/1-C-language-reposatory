#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    printf("PLEASE ENTER THE NUMBER OF ITEM YOU WANT TO SORT IN STRING BIG ORDER :");
    scanf("%d", &n);
    char word[n][30], temp[30];
    for (int i = 0; i < n; i++)
    {
        printf("please enter the word no : %d : ",i + 1);
        scanf("%s", &word[i]);
    }
    // sorting string
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (strlen(word[i]) < strlen(word[j]))
            {
                strcpy(temp, word[i]);
                strcpy(word[i], word[j]);
                strcpy(word[j], temp);
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%s\n",word[i]);
    }
    

    return 0;
}