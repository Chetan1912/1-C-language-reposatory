#include <stdio.h>
int main()
{   int sq;
printf("i  * *  1      2      3      4      5      6      7      8      9      10\n");
printf("**************************************************************************\n");
printf("**************************************************************************\n");
    for(int i=1; i<=9; i++)
    {   printf("%d  * *  ",i);
        for(int j=1;j<=10;j++)
        {
             sq=i*10+j;
             if (i<=2)
             {
                 printf("%d    ",sq*sq);  
             }
            else {
             printf("%d   ",sq*sq); 
            }
        }
        printf("\n");
    }
    return 0;
}