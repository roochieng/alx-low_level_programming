#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: concatenated string or NULL for error
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, d;
	char *c;

	if (s1 == NULL && s2 == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
	{}
	for (j = 0; s2[j] != '\0'; j++)
	{
		s1[i + j] = s2[j];
	}
	s1[i + j] = '\0';
	for (d = 0; d != '\0'; d++)
	{}

	c = malloc(d * sizeof(*c) + 1);
	if (c == NULL)
	{
		return (NULL);
	}
	return (c);
}
