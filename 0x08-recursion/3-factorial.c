#include "main.h"
/**
 * factorial - return factorial of a given num
 * @n: num
 * Return: 0
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n > 0)
		return (n * factorial(n - 1));
	return (1);
}
