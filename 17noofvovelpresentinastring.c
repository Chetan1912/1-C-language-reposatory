#include <stdio.h>
int main()
{   char str[100],count=0;
    printf("please enter the string you want to count vovel : \n");
    gets(str);
    for (int i = 0; str[i]!='\0'; i++)
    {
        if (str[i]=='A' || str[i]=='E' ||str[i]=='I' ||str[i]=='O' ||str[i]=='U' ||str[i]=='a' ||str[i]=='e' ||str[i]=='i' ||str[i]=='o' ||str[i]=='u')
        {
            count++;
        }
        
    }
    printf("\nTHE NO OF VOVEL ARE : %d",count);
    
    return 0;
}