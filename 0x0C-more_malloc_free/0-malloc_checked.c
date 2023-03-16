#include "main.h"
#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked - allocate memory using malloc with exit 98 if error
 * @b: memory
 * Return: pointer
 */
void *malloc_checked(unsigned int b)
{
	void *j;

	j = malloc(b);
	if (j == NULL)
		exit(98);

	return (j);
}
