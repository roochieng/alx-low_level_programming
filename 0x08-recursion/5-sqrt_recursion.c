#include "main.h"
/**
 * _sqrt_recursion - square root of a number
 * @m: number
 * Return: 0
 */
int _sqrt_recursion(int n)
{
	return (halp(n, 1));
}

/**
 * halp - helper function to solve _sqrt_recursion
 * @c: number to determine if square root
 * @i: incrementer to compare against `c`
 * Return: square root if natural square root, or -1 if none found
 */

int halp(int c, int a)
{
	int square;

	square = a * a;
	if (square == c)
		return (a);
	else if (square < c)
		return (halp(c, a + 1));
	else
		return (-1);
}
