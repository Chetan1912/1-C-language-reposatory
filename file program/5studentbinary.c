#include <stdio.h>

struct student
{
    int rn;
    char name[20];
    int age;
};
int main()
{
    struct student s = {1, "RAJA", 18};
    char c;
    FILE *std;
    int n;
    printf("please enter how many student you want to enter \n");
    scanf("%d", &n);
    std = fopen("5studentbinary.txt", "a+");
    printf("please enter 1)roll no 2)name  3)Age one by one STUDENT :");
    for (int i = 0; i < n; i++)
    {

        fwrite(&s, sizeof(struct student), 1, std);
    }
    rewind(std);
    printf("roll_no = %d name = %s age = %d \n", s.rn, s.name, s.age);

    while (fread(&s, sizeof(struct student), 1, std))
    {
        printf(".....................................");
    }
    fclose(std);
}
