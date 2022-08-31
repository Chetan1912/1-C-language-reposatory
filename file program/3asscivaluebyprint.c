#include <stdio.h>
#include <process.h>
int main()
{
    FILE *ptr;
    char c;
    ptr = fopen("3asci.txt", "w+");
    // print the assci value to file
    for (int i = 0; i < 256; i++)
    {
        putc(i, ptr);
    }
    puts("ASCII CHARACTER SET IS WRITTEN IN FILE\n");
    // move to start
    rewind(ptr);
    printf("THE CURRENT POSSITION IS %ld", ftell(ptr));
    // move to start of the decimal digit
    fseek(ptr, 49, 0);
    printf("\nthe decimal digits are -->\n");
    for (int i = 0; i < 10; i++)
    {
        c = getc(ptr);
        putchar(c);
    }
    printf("\n");
    // move start for the uppercase latter
    fseek(ptr, 66, 0);
    printf("the current possision is %ld \n", ftell(ptr));
    printf("the upper alphabats --> \n");
    for (int i = 0; i < 26; i++)
    {
        c = getc(ptr);
        putchar(c);
    }
    fclose(ptr);
}