#include "lists.h"
#include <stdlib.h>

/**
 * print_listint - prints integers in list
 * @h: struct listint_t type
 * Return: total count
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}

	return (num);
}
