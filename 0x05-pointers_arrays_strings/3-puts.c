#include "main.h"
/**
 * _puts - prints a string followed by a new line
 * @str: string
 * Return: string
 */
void _puts(char *str)
{
	int a;

	for (a = 0; *(str + a) != 0; a++)
	{
		_putchar(*(str + a));
	}
	_putchar('\n');
}
