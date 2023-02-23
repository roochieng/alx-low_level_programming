#include <stdio.h>
#include "main.h"
/**
 * print_diagonal - Print and diagonal line
 * @n: line length
 * Return: 0
 */
void print_diagonal(int n)
{
	int i, spc;

	if (i <= 0)
	{
		_putchar('\n');
	} else
	{
		for (i = 0; i <= n; i++)
		{
			for (spc = 0; spc < i; spc++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
