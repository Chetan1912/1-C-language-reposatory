#include <stdio.h>
#include <string.h>
void SPACEPRE(char str[], int n) // n is sum of strlen(str[]) and space
{
    for (int K = 0; K <= n - strlen(str); K++) // for the space print between string and subject 1;
        printf(" ");
}
int main()
{
    int m, n, k, pass = 0, rank = 0, temp;
    printf("PLEASE ENTER THE  NUMBER OF STUDENT\n");
    scanf("%d", &m);

    printf("PLEASE ENTER THE NO. OF SUBJECTS\n");
    scanf("%d", &n);
    int result[m][n + 1];                         // for the totel;
    char student[m][15], SUB[n][15], tempstr[15]; // tempstr[15] for the transfer the name of student
    getchar();
    for (int i = 0; i < n; i++)
    {
        printf("PLEASE ENTER THE NAME OF THE SUBJECT  %d. IN CAPITAL LATTER : ", i + 1);
        gets(SUB[i]);
    }

    // taking data
    for (int i = 0; i < m; i++)
    { // for take enter as a character;
        printf("PLEASE ENTER THE NAME OF ROLL.NO. : %d : ", i + 1);
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
    //*****************************>SORTING THE ARRAY<**************************************************
    for (int i = 0; i < m - 1; i++)
    {
        for (int j = i + 1; j < m; j++)
        {
            if (result[i][n] < result[j][n])
            {
                // for sort the totels
                for (int k = 0; k <= n; k++)
                {
                    temp = result[i][k];
                    result[i][k] = result[j][k];
                    result[j][k] = temp;
                }
                // SORTING THE NAMES ACORDING TOTAL OF THAT STUDENT;
                strcpy(tempstr, student[i]);
                strcpy(student[i], student[j]);
                strcpy(student[j], tempstr);
            }
        }
    }
     printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2);
     printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2);
     printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2);
     printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2);
     printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2);
     printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2);
     printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2);
     printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2);
    //*******************************************************************************************************
    // *******************************😉😉😉😉😂😂ending of sort array😉😉😉😉😉😉😉😉*****************
    //*********************************************************************************************************

    // printing result first line *******😎🤷‍♀️🤷‍♀️***************************
    printf("MARIT.NO     NAME");
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
    SPACEPRE(student[0], 11);
    printf("TOTEL      RESULT \n");
    // printing marks in result 😉😉😉😉😉😉😉😉😉😉😉😉😉😉😉*******************************
    for (int i = 0; i < m; i++)
    {
        if (result[i][n] == result[i + 1][n])
        {
            printf("    %d         ", rank + 1); // for the  equal total rank;
        }
        else
        {
            printf("    %d        ", rank + 1);
            rank++;
        }

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
            printf("  PASS ");
        }
        else
        {
            printf("  FAIL ");
            ;
        }
        printf("\n");
    }

    return 0;
}