#include <stdio.h>
char *myiota(int num, char *str)
{
    int numcopy = num, digit = 0,p;
    if (num<0)
    {
        num=-num;
    }
    
    while (num > 0)
    {
        num = num / 10;
        digit++;
    }
    num = numcopy;   //forpositive

    if (num >= 0)
    {
        str[digit] = '\0'; // declaring last character
        for (int i = digit-1; num > 0; i--)
        {
            str[i] = (num % 10)+'0';
            num = num / 10;
        }
    }
    // for handel the negetive string
    else
    {   num=-num;
         str[digit + 1] = '\0'; // declaring last character and first character is '-' in a string;
        for (int i = digit; num > 0; i--)
        {
            str[i] =(num % 10)+'0';
            num = num / 10;
        }
        str[0]='-';
    }
     return str;
}
int main()
{
    int n;
    printf("PLEASE ENTER THE NUMBER YOU WANT TO CONVERT IN A STRING : ");
    scanf("%d", &n);
    char intstr[15],c[15];
     myiota(n,intstr);
      printf("THE INTEGER IS :  %d  \n converted in      \n THE STRING : %s",n,intstr);
        return 0;
}