#include <stdio.h>
#include "main.h"
/**
 * print_line - draw a straight line
 * @n: line length
 *
 * Return: 0
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
