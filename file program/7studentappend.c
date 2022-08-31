#include <stdio.h>
struct student
{
    int rn;
    char name[20];
    int age;
};
int main()
{
    FILE *ptr;
    struct student s;
    ptr = fopen("5studentbinary.txt", "a+");
    while (fread(&s, sizeof(struct student), 1, ptr))
    {
        printf("%d  %s  %d\n", s.rn, s.name, s.age);
    }
    fclose(ptr);
}