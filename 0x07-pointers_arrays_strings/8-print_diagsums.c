#include "main.h"
/**
 * print_diagsums - print sum of two diagonals
 * @a: array
 * @size: size
 * Return: 0
 */
void print_diagsums(int *a, int size)
{
	int i;
	int diagO = 0;
	int diagT = 0;

	for (i = 0; i < size; i++)
	{
		diagO += a[(i * size) + i];
		diagT += a[(size - 1) + ((size - 1) * i)];
	}
	printf("%d, %d\n", diagO, diagT);
}

