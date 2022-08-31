#include <stdio.h>

struct student
{
    int rn;
    char name[20];
    int age;
};
int main()
{
    struct student s;
    int n;
    char c;
    FILE *std;
    printf("please enter how many student you want to enter \n");
    scanf("%d", &n);
    if ((std = fopen("2studentS.txt", "a+")) == NULL)
    {
        printf("file is not recognised in it\n");
    }
    for (int i = 0; i < n; i++)
    {
        printf("please enter 1)roll no 2)name  3)Age one by one STUDENT : %d\n", i + 1);
        scanf("%d", &s.rn);
        getchar();
        gets(s.name);
        scanf("%d", &s.age);
        fprintf(std, "%d -->  %s    %d  \n", s.rn, s.name, s.age);
    }
    printf("PLEASE ENTER FOR DETAIL");
    rewind(std);
    getchar();
    getchar();
    while ((c = getc(std)) != EOF)
    {
        putchar(c);
    }

    // printing from the file

    fclose(std);
}
