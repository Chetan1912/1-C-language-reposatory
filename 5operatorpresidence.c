#include <stdio.h>
int main()
{
     int x;
     printf("please  enter x : ");
     scanf("%d",&x);
     //oppresidence in printf;
     printf("%d,%d,%d",x++,x,++x);
     for (int i = 0; i < 100; i++)
     {
         printf("%d,%c",i,(i%10==9)?'\n': ' ');
     }
     
}