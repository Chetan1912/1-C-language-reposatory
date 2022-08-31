#include <stdio.h>
int lcd(int m, int n)
{
    int i = 2; //every number is divisible by 1
   begin:
    if ((m % i == 0) && (n%i == 0)) //i must be divisible by both numbers
      {
         return i;
      }
    else
      {
          i++;
          goto begin;
      }
}
int main()
{
    int n1, n2,c;
    printf("please enter the first no : ");
    scanf("%d", &n1);
    printf("\nplease enter the second no : ");
    scanf("%d", &n2);
   
    c=lcd(n1, n2);
    printf("\nthe lowest devisor is %d",c);

    return 0;
}