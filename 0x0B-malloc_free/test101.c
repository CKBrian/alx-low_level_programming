#include <stdlib.h>
#include "main.h"
char **strtow(char *str)
{
    int i, j, l, size, len = 0, k = 0;
    char **s;
    int in_word = 0;  /*Flag to indicate if currently inside a word*/

    if (str == NULL || str[0] == '\0')
        return ((void *)0);

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ' || str[i] == '\n')
        {
            in_word = 0;  /* Set flag to indicate outside word*/
        }
        else if (!in_word)
        {
            in_word = 1;  /* Set flag to indicate inside word*/
            k++;
        }
    }

    s = malloc((k + 1) * sizeof(char *));  /* Add +1 for NULL terminator*/

    if (s == NULL)
        return ((void *)0);

    len = 0;
    for (i = 0; i < k; i++)
    {
        while (str[len] == ' ' || str[len] == '\n')
            len++;

        for (j = len; str[j] != ' ' && str[j] != '\0'; j++)
        {}
        size = (j - len) + 1;
        s[i] = malloc(size * sizeof(char));
        if (s[i] == NULL)
            return ((void *)0);

        for (l = 0; l < size - 1; l++, len++)
        {
            s[i][l] = str[len];
        }
        s[i][l] = '\0';
    }
    s[k] = '\0';
    return s;
}

