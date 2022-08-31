#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    int M;
    char desti[30], source[30], c;
    strcpy(desti, argv[2]);
    strcpy(source, argv[1]);
    FILE *de, *so;
    so = fopen(source, "r");
    de = fopen(desti, "a+");
    while ((c = fgetc(so)) != EOF)
    {
        fputc(c, de);
        M = 1;
    }
    if (M == 1)
    {
        printf("THE FILE IS SUSSESFULLY COPIYED FROM file1=%s ------->   file2=%s \n", argv[1], argv[2]);
    }

    return 0;
}
