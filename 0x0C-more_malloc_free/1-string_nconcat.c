#include "main.h"
#include <stdlib.h>
#include <limits.h>

/**
 * string_nconcat - Concatenates two strings
 * @S1: String 1
 * @s2: string 2
 * @n: bytes
 * Return: pointer to newly allocated space in mem
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	int len1, i, c;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = (unsigned int)_strlen(s1);
	p = malloc((len1 + n + 1) * sizeof(char));
	if (p == NULL)
		return (NULL);
	for (i = 0, c = 0; i < (len1 + n); i++)
	{
		if (i < len1)
			p[i] = s1[i];
		else
			p[i] = s2[c++];
	}
	p[i] = '\0';

	return (p);
}
