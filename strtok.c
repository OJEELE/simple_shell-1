#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

/**
 * main- main function
 *
 * Return: int
 */
int main(void)
{
	char *lineptr = NULL;
	char *delim = " \t\n", *str;
	ssize_t nread;
	size_t n = 0;

	while (1)
	{
		printf("$");
		nread =	getline(&lineptr, &n, stdin);
		if (nread == -1)
		{
			perror("Exiting shell");
			return (-1);
		}
		str = strtok(lineptr, delim);
		while (str != NULL)
		{
			printf(" %s\n", str);
			str = strtok(NULL, delim);
		}
	}
	return (0);
}
