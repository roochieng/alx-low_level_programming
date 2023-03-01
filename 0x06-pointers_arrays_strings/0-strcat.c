#include "mian.h"
#include "2-strlen.c"
#include "9-strcpy.c"
/**
 * _strcat - Concatnates two strings
 * @dest: first string
 * @src: second string
 * Return: concatnated string
 */
char *_strcat(char *dest, char *src)
{	
	int i;
	int j;

	for (j = 0; dest[j] != '\0'; j++)
	{}

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[j + i] = src[i];
	}
	dest[j + i] = '\0';
	return (dest);
}
