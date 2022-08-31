#include <stdio.h>
int main()
{
    int n;
     printf("THIS IS THE PROGRAMM TO PRINT THE SORTED ARRAY\n");
    printf("PLEASE ENTER THE NO OF ELLIMENT : ");
    scanf("%d", &n);   // most imp declare after getting n;
    float sort[n], temp;
   
    for (int i = 1; i <= n; i++)
    {
        printf("\nPLEASE ENTER ELEMENT %d : ", i);
        scanf("%f", &sort[i - 1]);
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (sort[i] > sort[j])
            {
                temp = sort[i];
                sort[i] = sort[j];
                sort[j] = temp;
            }
        }
    }
    printf("\nTHE SORTED ARRAY IS : \n");
    for (int i = 0; i < n; i++)
    {
         printf("%d  = %0.2f\n",i+1,sort[i]);
    }
    

    return 0;
}