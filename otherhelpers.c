#include "simple_shell.h"

int _putchar(char c)
{
	return(write(1, &c, 1));
}

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
}

int _strlen(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{

	}

	return (i);
}

char *_strstr(char *haystack, const char *needle)
{
	char *c;

	while(*haystack)
	{
		while (*needle == *haystack)
		{
			needle++, haystack++;
		}
		if (*needle == '\0')
		{
			if (*haystack == '=')
			{
				haystack++;
				c = haystack;
				return(c);
			}
			return(NULL);
		}
		haystack++;
	}
	return (NULL);
}
