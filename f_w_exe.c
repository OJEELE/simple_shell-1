#include<stdio.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <unistd.h>

int main(void)
{
	pid_t child_pid;
	int status;
	int i;
	char *arg[] = {"ls", "-l", "/tmp", NULL};   
	
	for (i = 1; i <= 5; i++)
	{
		child_pid = fork();
		if(child_pid == -1)
		{
			perror("Error:");
			return(1);
		}
	}
	if (child_pid == 0)
	{
		execve("/usr/bin/ls", arg, NULL);
		perror("Error:");
		exit(1);	
	}
	else 
	{
		wait(&status);
	}
}
