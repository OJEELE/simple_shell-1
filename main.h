#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <stddef.h>

void check_cmd(char *cmd);
/* string tokenization  function */

void _strtok(const char *str, char delim);
int _strlen(char *s);


#endif/* MAIN_H */
