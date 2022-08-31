#include <stdio.h>
int main()
{
    FILE *ptr;
    float f[5] = {1.23, 1.5252, 1.85, 1.8975, 5.8555}, flot;
    ptr = fopen("floatstore.txt", "a+");
    for (int i = 0; i < 5; i++)
    {
        fwrite(&f[i], sizeof(float), 1, ptr);
    }
    // move pointer to the start
    rewind(ptr);
    // read and display
    for (int i = 0; i < 5; i++)
    {
        fread(&flot, sizeof(float), 1, ptr);
        printf("%0.4f\n", flot);
    }
    fclose(ptr);
}