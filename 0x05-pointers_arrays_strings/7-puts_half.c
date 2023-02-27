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
	int last_num = 0;

	len = _strlen(str);

	if (len % 2 != 0)
	{
		last_num++;
	}

	for (a = (len / 2) + last_num; a < len; a++)
	{
		_putchar(str[a]);
	}
	_putchar('\n');

}
