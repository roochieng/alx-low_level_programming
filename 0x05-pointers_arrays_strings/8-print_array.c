#include "main.h"
#include "2-strlen.c"
/**
 * print_array - print the number of elements of array
 * @n: number of elements
 * @a: array
 * Return: elements
 */
void print_array(int *a, int n)
{
	int b;

	for (b = 0; b <= n; b++)
	{
		if (b == n)
		{
			printf("%d", a[b]);
		}
		printf("%d, ", a[b]);
	}
	printf("\n");
}
