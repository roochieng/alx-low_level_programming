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
	
	for(i = 0; dest[i]! = '\0'; ++i)
		;

	for(j = 0; src[j] != '\0'; ++j;)
	{
		dest[i] = src[j];
		i++
	}
	dest[i] = '\0'
	return(dest);
}
