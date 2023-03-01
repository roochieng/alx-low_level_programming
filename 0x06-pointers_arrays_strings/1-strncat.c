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

	for (j = 0; dest[j] != '\0'; j++)
	{}

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[j + i] = src[i];
	}
	dest[j + i] = '\0';
	return (dest);
}
