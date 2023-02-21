#include "main.h"
#include "6-abs.c"

/**
 * print_to_98 - prints numbers from n to 98
 * @n: first num
 *
 *
 * Return: should return 0
 *
 */
void print_to_98(int n)
{
	int i;

	if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			_putchar(i);
			if (i != 98)
			{
				_putchar(',');
			}
		}
	} else
	{
		for (i = n; i <= 98; i++)
		{
			_putchar(i);
			if (i != 98)
			{
				_putchar(',');
			}
		}
	}
	_putchar('\n');

}