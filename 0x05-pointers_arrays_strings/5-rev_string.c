#include "main.h"
#include "2-strlen.c"
/**
 * rev_string - reverses string
 * @s: string
 * Return: reversed string
 */
void rev_string(char *s)
{
	int a;

	for (a = _strlen(s) - 1; a >= 0; a--)
	{
		_putchar(s[a]);
	}
	_putchar('\n');

}
