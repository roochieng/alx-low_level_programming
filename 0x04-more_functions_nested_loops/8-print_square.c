#include <stdio.h>
#include "main.h"
/**
 * print_square - prints a square
 *
 * @size: size of the suare
 *
 * Return: 0
 */
void print_square(int size)
{
	int k, l;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (k = 0; k < size; k++)
		{
			for (l = 0; l < size; l++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
