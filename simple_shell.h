#ifndef SIMPLE_SHELL_H
#define SIMPLE_SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>

extern char **environ;

typedef struct data
{
	char *line;
	int num;
} data_t;



data_t get_inputs();
char **get_tokens(char *line, char *delimiters);
char *get_all_path();
void print_env(char **environ);
char *search_path(char **environ);
char **get_each_path();
char *_strstr(char *haystack, const char *needle);
int _strlen(char *str);
int _putchar(char c);
void _puts(char *str);

#endif
