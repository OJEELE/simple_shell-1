#include <stdio.h>
#include <stdlib.h>
/**
 * main -Entry
 * @av: Null terminated array of strings
 * @ac: number of items in av
 * Return: int
 */
int main(int ac, char **av)
{
	while (*av != NULL)
	{
		printf("%s\n", *av);
		av++;
	}
	return (0);
}
