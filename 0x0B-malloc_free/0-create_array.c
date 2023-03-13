#include <stdlib.h>
#include "main.h"
/**
 * create_array - create array of characters
 * @size: length of the array
 * @c: character
 * Return: pointer to memory address or null if error
 */
char *create_array(unsigned int size, char c)
{
	char *i;
	unsigned int j;

	if (size == 0)
	{
		return (NULL);
	}
	i = malloc(size * sizeof(*i));
	if (i == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < size; j++)
	{
		i[j] = c;
	}
	return (i);
}
