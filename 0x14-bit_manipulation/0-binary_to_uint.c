#include <main.h>
#include <stdio.h>
/**
 * binary_to_uint - convert a binary number to an unsigned int
 * @b: char string
 * Return: converted decimal number or
 * return 0 if there is an unconvertable char
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int y = 0;

	if (b == NULL)
		return (0);
	while (*b)
	{
		if (*b == '1')
			y = (y << 1) | 1;
		else if (*b == '0')
			y <<= 1;
		else
			return (0);
		b++;
	}
	return (y);
}
