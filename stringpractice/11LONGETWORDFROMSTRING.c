#include <stdio.h>
#include <string.h>
int main()
{
    int in = 0, col = 0;
    char str[150], words[100][20], small[100], large[100];
    printf("please enter the string : ");
    gets(str);
    //     //Split the string into words such that each row of array words represents a word
    for (int i = 0; str[i] != '\0'; i++)
    {
        // Here, in represents row and col represents column of two-dimensional array words
        if (str[i] != ' ' && str[i] != '\0')
        {
            words[in][col++] = str[i];
        }
        else
        {
            words[in][col] = '\0';

            col = 0;
            in++;
        }
    }
    // Initialize small and large with first word in the string
    strcpy(small, words[0]);
    strcpy(large, words[0]);

    // Determine smallest and largest word in the string
    for (int k = 0; k <=in; k++)
    {
        // If length of small is greater than any word present in the string
        // Store value of word into small
        if (strlen(small) > strlen(words[k]))
        {
            strcpy(small, words[k]);
        }
        // If length of large is less than any word present in the string
        // Store value of word into large
        if (strlen(large) < strlen(words[k]))
            strcpy(large, words[k]);
    }
    printf("Smallest word: %s\n", small);
    printf("Largest word: %s\n", large);

    return 0;
}

