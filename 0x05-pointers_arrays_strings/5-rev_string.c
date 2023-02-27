#include "main.h"
#include "2-strlen.c"
/**
 * rev_string - reverses string
 * @s: string
 * Return: reversed string
 */
void rev_string(char *s)
{
	int b;
	char c;

	for (b = 0; b < _strlen(s) / 2; b++)
	{
		c = s[b];
		s[b] = s[_strlen(s) - b - 1];
		c = s[_strlen(s) - b - 1];
	}
	_putchar(c);
}
