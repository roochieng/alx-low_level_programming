#include "main.h"
#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked - allocate memory using malloc
 * @b: memory
 * Return: 0 for success and 98 for error
 */
void *malloc_checked(unsigned int b)
{
	void *j;

	j = malloc(b);
	if (j == NULL)
		exit(98);

	return (j);
}
