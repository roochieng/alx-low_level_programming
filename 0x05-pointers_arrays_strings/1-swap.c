#include "main.h"
/**
 * swap_int -swaps two integers
 * @a: first int
 * @b: second int
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int i = *a;
	int k = *b;

	*a = k;
	*b = i;
}
