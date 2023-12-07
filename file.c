#include "main.h"
void check_cmd(char *cmd)
{
	if (access(cmd, F_OK) == 0)
		write(1, "FOUND\n", 8);
	else 
		write(1, "NOT FOUND\n", 11);
}
/* code divider*/
int main(void)
{
	char *lptr = NULL;
	ssize_t nread;
	size_t buff_size = 0;
	char *token;

	while (1)
	{
		write(1, "#cisfun$ ", 9);
		nread = getline(&lptr, &buff_size, stdin);
		
		token = strtok(lptr, " \t\n");
		if (nread == -1)
		{
			perror("Exiting shell...");
			return (-1);
		}
		if (strcmp(token, "which") == 0)
		{
			token = strtok(NULL, " \t\n");
			while (token)
			{
				check_cmd(token);
				token = strtok(NULL, " \t\n");
			}
		}
		else
		{
			write(1, "COMMAND DOESN'T EXIST\n", 23);
		}
	}
	return (0);
}
