#include "main.h"
#include <stdlib.h>
/**
 * _strdup - return pointer to a newly allocated space in mem
 * @str: string
 * Return: returns pointer to the duplicated string
 */
char *_strdup(char *str)
{
	char *b;
	int i, c;

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		;
	}
	b = malloc(i * sizeof(*b) + 1);
	if (b == NULL)
	{
		return (NULL);
	}
	for (c = 0; c < i; c++)
	{
		b[c] = str[c];
	}
	b[c] = '\0';

	return (b);
}
