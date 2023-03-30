#include "lists.h"
#include <stdio.h>

/**
 * print_list - print all elements of `list_t` list
 * @j: head of linked list
 * Return: number of nodes
 */
size_t print_list(const list_t *j)
{
	const list_t *current;
	size_t c;

	c = 0;
	current = j;
	while (current != NULL)
	{
		printf("[%d] %s\n", current->len, current->str);
		current = current->next;
		c++;
	}

	return (c);
}
