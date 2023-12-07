#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>

int main(void)
{
	char *lptr = NULL;
	ssize_t nread;
	size_t buff_size = 0;
	char *token;
	int i = 0, status;
	char **array;
	pid_t child_pid;

	while (1)
	{
		write(1, "#cisfun$ ", 9);
		nread = getline(&lptr, &buff_size, stdin);
		array = malloc(sizeof(char *) * 1024);
		if (nread == -1)
		{
			perror("Exiting shell...");
			return (-1);
		}

		token = strtok(lptr, " \t\n");
		while (token != NULL)
		{
			array[i] = token;
			token = strtok(NULL, " \t\n");
			i++;
		}
		array[i] = NULL;
		child_pid = fork();

		if (child_pid == 0)
		{
			if (execve(array[0], array, NULL)== -1)
				perror("Error:");
		}
		else
		{
			wait(&status);
		}
		i = 0;
		free(array);
	}
}
