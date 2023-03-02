#include "main.h"
/**
 * leet - encodes string
 * @s: string
 * Return: encoded
 */
char *leet(char *s)
{
	int i, j;
	char from[11] = "aAeEoOtTlL";
	char to[11] = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; (form[j] || to[j]) != '\0'; j++)
		{
			if (s[i] == from[j])
			{
				s[i] = to[j];
			}
		}

	}
	return (s);
}
