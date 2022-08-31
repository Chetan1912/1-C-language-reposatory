#include <stdio.h>
#include <malloc.h>
int main()
{
    int **ptr, m, n;
    printf("please enter the no of row\n");
    scanf("%d", &m);

    printf("please enter the no of colon\n");
    scanf("%d", &n);
    ptr = (int **)malloc(m * sizeof(int *));
    for (int i = 0; i < m; i++)
    {
        ptr[i] = (int *)malloc(n * sizeof(int));
    }
    // matrics enter row by row
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("please enter the :(%d,%d)\n", i + 1, j + 1);
            scanf("%d", *(ptr + i) + j);
        }
    }
    //.print by row by row
    printf("the dynamic matrics --->\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", *(*(ptr + i) + j));
        }
        printf("\n");
    }
    free(ptr);
}