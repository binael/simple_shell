#include "simple_shell.h"

void print_env(char **environ)
{
	char **str = environ;
	int len;

	for (len = 0; *str != NULL; str++)
	{
		len = _strlen(*str);

		write(STDOUT_FILENO, *str, len);
		write(STDOUT_FILENO, "\n", 1);
	}
}

char *search_path(char **environ)
{
	char **str = environ;
	char *search = NULL;

	for (; *str != NULL; str++)
	{
		if (_strstr(*str, "PATH") != NULL)
		{
			search = _strstr(*str, "PATH");
			break;
		}
	}
	return(search);
}

char *get_all_path()
{
	char *search = search_path(environ);
	char **token = get_tokens(search, "=");
	char *my_token = token[1];

	free (token);
	return (my_token);
}

char **get_each_path()
{
	char *all_path = get_all_path();
	char **token = get_tokens(all_path, ":");
	if (token == NULL)
		write(STDOUT_FILENO, "get token failed", 20);
	return (token);
}
