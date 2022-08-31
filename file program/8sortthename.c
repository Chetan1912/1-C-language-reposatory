#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
    int n;
    printf("HOW MANNEY NAME YOU WANT TO SORT FRO FILE\n");
    scanf("%d", &n);
    char sort[n][15], temp[15];
    FILE *ptr;
    ptr = fopen("8sortthename.txt", "r");
    // READ AND STORE THE NAME IN THE VARIABLE
    for (int i = 0; i < n; i++)
    {
        fscanf(ptr, "%s", &sort[i]);
    }
    // logic for the sort the string
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (strcmp(sort[i], sort[j]) > 0)
            {
                strcpy(temp, sort[i]);
                strcpy(sort[i], sort[j]);
                strcpy(sort[j], temp);
            }
        }
    }
    fclose(ptr);
    // for the print infile reopen the file
    ptr = fopen("8sortthename.txt", "w+");
    for (int i = 0; i < n; i++)
    {
        fprintf(ptr, "%d -->  %s\n", i + 1, sort[i]);
    }
    printf("THE NAME ARE SORTED.........");

    fclose(ptr);
}
