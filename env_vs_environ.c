#include "main.h"
extern char **environ;
int main(int ac, char **av, char **env)
{
	printf("environ:%p\nenv: %p\n",  (void*)environ,(void*)env);
	return (0);
}
