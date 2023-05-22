#include "main.h"

/**
 * _memset - Sets memory
 * @s: where pointed
 * @b: bytes
 * @n: amount of bytes
 * Return: returns s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
