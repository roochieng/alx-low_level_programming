#include "main.h"
/**
 * _strcpy -copy
 * @dest:where to copy
 * @src: where to copy from
 * Return: Copied
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for (; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
