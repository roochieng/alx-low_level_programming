#include <stdio.h>
#include "main.h"
/**
 * more_numbers - print 0-14 ten times
 *
 * Return: 0
 */
void more_numbers(void)
{
	int i, count;

	for (count = 0; count <= 9; count++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
			{
				_putchar(i / 10 + '0');
			}
			_putchar(i % 10 + '0');
		}
		_putchar('\n');
	}
}
