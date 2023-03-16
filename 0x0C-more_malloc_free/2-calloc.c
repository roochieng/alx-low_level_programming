#include "main.h"
#include <stdlib.h>
#include <limits.h>
/**
 * _calloc - allocate memory to an array
 * @nmemb: number of elements
 * @size: size of memory in bytes
 * Return: 0 on success or NULL on 0 and error
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *t;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	t = malloc(nmemb * size);
	if (t == NULL)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
		t[i] = 0;

	return (t);
}
