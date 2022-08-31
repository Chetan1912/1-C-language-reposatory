#include <stdio.h>
int main()
{
    int m,n;
    printf("please enter the no of no ellimet is raw\n");
    scanf("%d",&m);
    
    printf("please enter the no of no ellimet is colon\n");
    scanf("%d",&n);
    int eli[m][n];
    for(int i=0; i<m; i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("please enter the alliment no [%d,%d]\n",(i+1),j+1);
            scanf("%d",&eli[i][j]);
        }
    }
    int max=eli[0][0];
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
         {
             if(eli[i][j]>max)
             {
                 max=eli[i][j];
             }
         }
    }
    printf("the maximum eliment is all : %d ",max);
    return 0;
}