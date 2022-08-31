#include <stdio.h>
#include <malloc.h>
int sort(int *v, int n)
{
    int temp;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (*(v + i) > *(v + j))
            {
                temp = *(v + i);
                *(v + i) = *(v + j);
                *(v + j) = temp;
            }
        }
    }
}
int main()
{
    int *ptr, n;
    printf("please enter the value of : n \n");
    scanf("%d", &n);
    ptr = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("please enter the value no : %d\n", i + 1);
        scanf("%d", ptr++);
    }
    ptr = ptr - n;
    sort(ptr + n / 2, (n % 2) ? (n / 2) + 1 : n / 2); // sort the second half

    printf("SORTED SSECOND HALF -->\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", *(ptr++));
    }
}