#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <stddef.h>

/*environmental variables */
extern char **environ;
char *_getenv(const char *name);
char *_strdup(char *str);
void check_cmd(char *cmd);

/*custom functions */

void _strtok(const char *str, char delim);
int _strlen(char *s);
void _puts(char *str);
char *_strcat(char *dest, char *src);
int _strcmp(const char *s1, const char *s2);
char *_strcpy(char *dest, char *src);
int _strncmp(const char *s1, const char *s2, size_t n);
int _putchar(char c);
int _atoi(char *s);


#endif/* MAIN_H */
