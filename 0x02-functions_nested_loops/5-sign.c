#include "main.h"
/**
 * print_sign - checks checks if n is greater than 0
 *
 * @n: character to compare
 *
 * Return: 1 if a is a letter or 0 if otherwise
 *
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	_putchar('-');
	return (-1);
}
