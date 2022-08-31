// .\sortstringfromcomandline.exe for run comand
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    int temp, sort[argc];
    for (int i = 0; i < argc - 1; i++)
    {
        sort[i] = atoi(argv[i + 1]);
    }
    for (int i = 0; i < argc - 2; i++)
    {
        for (int j = i + 1; j < argc - 1; j++) // because argc has one extra file name as a argument
        {
            if (sort[i] > sort[j])
            {
                temp = sort[i];
                sort[i] = sort[j];
                sort[j] = temp;
            }
        }
    }
    // for the  printing sorted array
    for (int i = 0; i < argc - 1; i++)
    {
        printf("%d\n", sort[i]);
    }

    return 0;
}
