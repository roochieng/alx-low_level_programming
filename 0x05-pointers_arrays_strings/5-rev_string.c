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
	
	for (b = _strlen(s) - 1; b >= 0; b--)
	{
		_putchar(s[b]);
	}
}
