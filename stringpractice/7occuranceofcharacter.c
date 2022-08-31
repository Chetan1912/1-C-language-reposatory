#include <stdio.h>
int main()
{
    int occo = 0, j = 0;
    char str1[100], index[50], c;
    printf("PLESE ENTER THE STRING : ");
    gets(str1);
    printf("\nPLEASE ENTER THE CHATACTER YOU WANT TO CHECK OCCORANCE : ");
    c = getchar();
    for (int i = 0; str1[i] != '\0'; i++)
    {
        if (str1[i] == c)
        {index[j++]=i+1;
            occo++;
        }
    }
    printf("THE NO OF OCCORANCES OF --- %c --- IS : %d",c,occo);
    printf("\nTHE INDEX OF --- %c ---",c);
    for (int i = 0; i <j; i++)
    {
        printf("%d,",index[i]);
    }
    

    return 0;
}