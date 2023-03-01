#include "mian.h"
/**
 * _strncat - Concatnates two strings
 * @dest: first string
 * @src: second string
 * @n: bytes
 * Return: concatnated string
 */
char main(char *dest, char *src, int n)
{
	int i, c;

	for (i = 0; dest[i] != '\0'; i++)
		;

	for (c = 0; src[c] != '\0' && n > 0; c++, n--, i++)
	{
		dest[i] = src[c];
	}
	return (dest);
}
