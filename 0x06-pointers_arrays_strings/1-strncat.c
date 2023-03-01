#include "mian.h"
#include "2-strlen.c"
#include "9-strcpy.c"
/**
 * _strncat - Concatnates two strings
 * @dest: first string
 * @src: second string
 * @n: bytes
 * Return: concatnated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	for (i = 0; dest[i] != '\0'; i++)
	{}

	for (j = 0; n > 0 && src[j] != '\0'; j++, n--, i++)
	{
		dest[i] = src[j];
	}
	dest[j + i] = '\0';
	return (dest);
}
