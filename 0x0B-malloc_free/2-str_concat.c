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
	int i, j, b, d;
	char *c;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (i = 0; s1[i] != '\0'; i++)
	{}
	for (j = 0; s2[j] != '\0'; j++)
	{}
	c = malloc(i * sizeof(*s1) + j * sizeof(*s2) + 1);
	if (c == NULL)
	{
		return (NULL);
	}
	for (b = 0, d = 0; b < (i + j + 1); b++)
	{
		if (b < i)
		{
			c[b] = s1[b];
		}
		else
		{
			c[b] = s2[d++];
		}
	}
	return (c);
}
