#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* _strtok - function that tokenizes string
 * @str: pointer to string to be separated
 * @delim: delimiter to separate the string
 * Return: returns nothing (void)
 */
void _strtok(const char *str, char delim)
{
    int len = strlen(str);
    char word[len + 1];
    int j = 0;

    for (int i = 0; i <= len; i++)
    {
        if (str[i] == delim || str[i] == '\0')
        {
            word[j] = '\0';
            if (j > 0)
            {
                printf("%s\n", word);
                j = 0;
            }
        }
        else
        {
            word[j++] = str[i];
        }
    }
}
