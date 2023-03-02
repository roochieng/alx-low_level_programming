#include "main.h"
/**
 * reverse_array - Reverses the array
 * @a: Array
 * @n: number of elements
 * Return: reversed
 */
void reverse_array(int *a, int n)
{
	int reversed;
	int i = 0;

	while (i < n)
	{
		reversed = a[i];
		a[i] = a[n];
		a[i] = reversed;
		i++;
		n--;
		
	}
	return (reversed);
}
