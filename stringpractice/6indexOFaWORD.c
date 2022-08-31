#include <stdio.h>
#include <string.h>
void SMALLINDEX(char strb[], char strs[])
{
    int count = 1, k, small;
    for (int i = 0; strb[i] != '\0'; i++)
    {
        k = 0;
        small = 0;
        if (strb[i] == strs[k])
        {
            for (int j = i; strs[k]!='\0'; j++)
            {
                if (strb[j] == strs[k++])
                {
                    small++;
                }
            }
        }
        if (small == strlen(strs))
        {
            goto end;
        }
        count++;
    }
end:
   if (count==strlen(strb)+1)
   {
       printf("YOUR ENTERED SMALL STRING IS NOT IN THE BIG STRING ");
   }
   else
   {   
    printf("THE INDEX OF SMALL STRING IS %d \n", count);
   }
}
int main()
{
    char strsmall[15], strbig[100];
    printf("PLEASE ENTER THE BIG STRING : ");
    gets(strbig);
    printf("PLEASE ENTER THE SMALL STRING : ");
    gets(strsmall);
    SMALLINDEX(strbig, strsmall); // printing the string
    return 0;
}