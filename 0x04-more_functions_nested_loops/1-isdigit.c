#include <stdio.h>
#include "main.h"
/**
 * _isdigit - checks if a number is digit
 *
 * @c: number
 *
 * Return: 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
