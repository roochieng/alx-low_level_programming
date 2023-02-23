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
	count =0;

	for (count < 10; count++)
	{
		for (i = 0; i <= 14; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
	_putchar('\n');
}
