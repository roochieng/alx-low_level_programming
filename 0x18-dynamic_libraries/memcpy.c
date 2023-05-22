#include "main.h"
/**
 * _memcpy - copy memory area
 * @dest: area to copy to
 * @src: to copy from
 * @n: Bytes to copy
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
