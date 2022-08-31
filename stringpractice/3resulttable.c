#include <stdio.h>
#include <string.h>
void SPACEPRE(char str[], int n) // n is sum of strlen(str[]) and space
{
    for (int K = 0; K <= n - strlen(str); K++) // for the space print between string and subject 1;
        printf(" ");
}
int main()
{
    int m, n, k, pass = 0;
    printf("please enter the no of student\n");
    scanf("%d", &m);

    printf("please enter the no of subject\n");
    scanf("%d", &n);
    int result[m][n + 1]; // for the totel;
    char student[m][15], SUB[n][15];
    getchar();
    for (int i = 0; i < n; i++)
    {
        printf("please enter the name of subject  %d in capital latter : ", i + 1);
        gets(SUB[i]);
    }

    // taking data
    for (int i = 0; i < m; i++)
    { // for take enter as a character;
        printf("please enter the name of roll no : %d : ", i + 1);
        gets(student[i]);
        k = 0;
        result[i][n] = 0;
        for (int j = 0; j < n; j++)
        {
            printf("\nPLEASE ENTER THE MARKS OF ROLL NO %d . %s in %s :", i + 1, student[i], SUB[k++]);
            scanf("%d", &result[i][j]);
            // for total
            result[i][n] += result[i][j]; // because we want to save the  value in last alliment
        }

        getchar();
    }
    // printing result first line *******🤣🤣🤣🤣🤣🤣🤣🤣🤣🤣🤣🤣🤣🤣🤣***************************
    printf("ROLL.NO      NAME");
    for (int k = 0; k < n; k++)
    {
        if (k == 0)
        {
            SPACEPRE(student[0], 11);
        }
        else
        {
            SPACEPRE(SUB[k - 1], 10); // K-1 BECAUCE WE HAVE TO PRIT SPACE BETWEEN 2 SUBJECT;
        }

        printf("%s", SUB[k]);
    }
    SPACEPRE(student[0], 12);
    printf("TOTEL      RESULT \n");
    // printing marks in result 😉😉😉😉😉😉😉😉😉😉😉😉😉😉😉*******************************
    for (int i = 0; i < m; i++)
    {
        printf("   %d         ", i + 1);
        printf("%s", student[i]);
        SPACEPRE(student[i], 9);
        pass = 0;
        for (int j = 0; j <= n; j++)
        {
            printf(" %d        ", result[i][j]);
            if ((result[i][n] / n) >= 33 && result[i][j] >= 33 && j != n) // FOR THE RESULT STATEMENT  j!=n because j=n is total
            {
                pass++;
            }
        }

        if (pass == n)
        {
            printf("PASS ");
        }
        else
        {
            printf("FAIL ");
            ;
        }
        printf("\n");
    }

    return 0;
}