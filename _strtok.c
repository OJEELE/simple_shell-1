#include <stdio,h>
#include <stdlib.h>
#include <string.h>
/*_strtok - function that tokenizes string
 * @str: pointer to string to be seperated
 * @delim: delimeter to seperate the string
 * Return: returns character
 */
void _strtok(const char *str, char *delim)
{
	int len = strlen(str);
	char str[len + 1];
	int i, j;
	for (i = 0; i <= len; i++)
	{
		j = 0;
		if (str[i] == delim || str[i] == '\0')
			word[j] = '\0';
		if (j > 0)
		{
			printf("%s\n", str);
			j = 0;
		}
		else
		{
			word[j] = str[i];
			j++;
		}

	}
	return (0);
}
