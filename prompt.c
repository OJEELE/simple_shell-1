#include <stdio.h>
#include <stdlib.h>
/**
 * main- main  function
 *
 * Return: int
 */
int main(void)
{
	size_t n = 0;
	size_t nread = 0;
	char *lineptr = NULL;

	while (1)
	{
		printf("$");
		lineptr = malloc(sizeof(char) * 1024);
		nread = getline(&lineptr, &n, stdin);
		if (nread == -1)
		{
			perror("Exiting shell...");
			return (-1);
		}
		printf("command is : %s\n", lineptr);
		printf("buffer size is : %lu\n", n);
		printf("Read %ld\n", nread);
		free(lineptr);
	}
	return (0);
}
