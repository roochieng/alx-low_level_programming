#include "main.h"
/**
 * halp - helper function to solve _sqrt_recursion
 * @c: number to determine if square root
 * @a: incrementer to compare against `c`
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
/**
 * _sqrt_recursion - return the natural square root of a number
 * @n: int number
 * Return: If no natural square root, return -1. Else return natural
 * square root
 */
int _sqrt_recursion(int n)
{
	return (halp(n, 1));
}

