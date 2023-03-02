#include "mian.h"
/**
 * _strcat - Concatnates two strings
 * @dest: first string
 * @src: second string
 * Return: concatnated string
 */
char *_strcat(char *dest, char *src)
{
	int i, c;
	int *point;

	for (i = 0; dest[i] != '\0'; i++)
		;

	for (c = 0; src[c] != '\0'; c++)
	{
		dest[i] = src[c];
		i++;
	}

	dest[i] = '\0';
	point = &dest;
	return (point);
}
