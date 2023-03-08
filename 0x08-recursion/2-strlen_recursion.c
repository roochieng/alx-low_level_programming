#include "main.h"
/**
 * _strlen_recursion - return length of a string
 * @s: string
 * Return: 0
 */
int _strlen_recursion(char *s)
{
	int n = 0;

	if (*s)
	{
		n = _strlen_recursion(s + 1);
		return (n += 1);
	}
	return (0);
}
