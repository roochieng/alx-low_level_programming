#include "main.h"
/**
 * _pow_recursion - raise x to power of y
 * @x: number to raise
 * @y: power to raise x to
 * Return: 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y > 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	return (1);
}
