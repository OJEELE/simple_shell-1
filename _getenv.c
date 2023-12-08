#include "main.h"
char *_getenv(const char *name)
{
	extern char **environ;
	int i = 0;
	char *token, *env_var;
	
	while (environ[i])
	{
		env_var =  strdup(environ[i]);
		token = strtok(env_var, "=");
		if (strcmp(token, name) == 0)
		{
			return (strdup(strtok(NULL, "=")));
			free(env_var);
		}
		i++;
	}
	return (NULL);
}
int main(void)
{
	char *homevalue = _getenv("HOME");
	if (homevalue != NULL)
	{
		printf("%s\n", homevalue);
		free(homevalue);
	}
	else
	{
		printf("environmental variable not found");
	}
	return (0);
}       

