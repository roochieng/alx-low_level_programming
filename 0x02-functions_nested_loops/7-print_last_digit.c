#include "main.h"
#include "6-abs.c"
/**
 * print_last_digit - prints the last digit of a number
 *
 * @n: is the number
 *
 * Return: should return 0
 *
 */
int print_last_digit(int n)
{
	return (_abs(n % 10));
}
