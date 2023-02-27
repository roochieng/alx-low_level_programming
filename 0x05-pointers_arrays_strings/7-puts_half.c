#include "main.h"
#include "2-strlen.c"
/**
 * puts_half - prints half of a string
 * @str: string
 * Return: string
 */
void puts_half(char *str)
{
	int a;
	int len;

	len = _strlen(str);

	for (a >= len / 2; a <= len - 1; a++)
	{
		_putchar(str[a]);
	}
	_putchar('\n');

}
