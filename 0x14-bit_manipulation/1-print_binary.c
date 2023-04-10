#include "main.h"

/**
 * print_binary - prints the binary equivalent of a decimal number
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	int i, len = 0;
	unsigned long int curnt;

	for (i = 63; i >= 0; i--)
	{
		curnt = n >> i;

		if (curnt & 1)
		{
			_putchar('1');
			len++;
		}
		else if (len)
			_putchar('0');
	}
	if (!len)
		_putchar('0');
}
