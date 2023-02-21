#include "main.h"
/**
 * times_table - prints the times table
 *
 *
 * Return: should return 0
 *
 */
void times_table(void)
{
	int a;
	int b;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			int times = a * b;
			if (b == 0)
			{
				_putchar('0');
			} else if(times < 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(times + '0');
			} else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(times / 10 + '0');
				_putchar(times % 10 + '0');
			}
		}
		_putchar('\n');
	}
}
