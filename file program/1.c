#include <stdio.h>
int main()
{
    FILE *ptr;

    char c;
    ptr = fopen("1printnprimeno.c", "a+");
    while ((c = fgetc(ptr)) != EOF)
    {
        printf("%c", c); // we had written %c to convert the asci value to the character
    }
    fprintf(ptr, "\nmy name is chetan");
    fclose(ptr);
}