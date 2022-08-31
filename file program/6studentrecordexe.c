#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Student
{
    int roll_no;
    char name[20];
};
int main()
{
    FILE *of;
    of = fopen("c1.txt", "a+");
    struct Student inp1 = {1, "Ram"};
    struct Student inp2 = {2, "Shyam"};
    fwrite(&inp1, sizeof(struct Student), 1, of);
    fwrite(&inp2, sizeof(struct Student), 1, of);

    rewind(of);
    while (fread(&inp1, sizeof(struct Student), 1, of))
        printf("roll_no = %d name = %s\n", inp1.roll_no, inp1.name);
    fclose(of);
}