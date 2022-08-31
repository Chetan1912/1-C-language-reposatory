#include <stdio.h>
int main()
{    char str[100];
    printf("please enter your string : \n");
    gets(str);
    for (int i = 0; str[i]!='\0'; i++)
    {
        if (str[i]==' '|| str[i]=='\t')
        {   
            printf("\n");
        }
        else
        {
            printf("%c",str[i]);  //else we can use putchar(str[i]);
        }
        
        
    }
    
    return 0;
}