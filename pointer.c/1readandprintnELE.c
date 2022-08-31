#include <stdio.h>
int main()
{
    int n, i, *p;
    printf("please enter how manney aliment you want to enter : -->\n");
    scanf("%d", &n);
    int arr[n];
    p = arr;
    for (i = 0; i < n; i++)
    {
        printf("please enter the element no  : %d\n", i + 1);
        scanf("%d", p++);
    }
    // THE VERY IMPORTANT THINK IS TO REINITIALIZE THE POINTER;
    p = p - n;
    for (i = 0; i < n; i++)
    {
        printf("NO %d :  %d\n", i + 1, *(p++));
    }
}