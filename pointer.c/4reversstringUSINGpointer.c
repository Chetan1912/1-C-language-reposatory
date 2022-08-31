#include <stdio.h>
#include <conio.h>
int len(char *l)
{
    int count = 0;
    while (*(l++) != '\0') // we can also use *s++
    {
        count++;
    }
    return count;
}
char strrev(char *r)
{
    int start;
    char *end;
    char temp;
    start = len(r);
    end = start + r - 1; // initialised end pointer;
    while (r < end)
    {
        temp = *r;
        *r = *end;
        *end = temp;
        r++;
        end--;
    }
}
int main()
{

    char str[100];
    printf("please enter your name \n");
    gets(str);
    strrev(str);
    printf("the reversed string is : %s", str);
    getch();
}