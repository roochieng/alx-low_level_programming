#include "main.h"
#include <stdlib.h>
#include <limits.h>

/**
 * array_range - creates an array of integers ordered from min to max
 * @min: minimum
 * @max: maximum
 * Return: 0 or NULL if fails
 */
int *array_range(int min, int max)
{
	int i;
	int *t;
	int len;

	if (min > max)
		return (NULL);
	len = 0;
	for (i = min; i <= max; i++)
		len++;

	t = malloc(sizeof(int) * len);
	if (t == NULL)
		return (NULL);

	i = 0;
	while (min <= max)
	{
		t[i] = min;
		i++;
		min++;
	}
	return (t);
}
