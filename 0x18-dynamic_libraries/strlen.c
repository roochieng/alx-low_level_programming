#include "main.h"
/**
 * _strlen - gives length of a string
 * @s: pointer to the string
 * Return: 0
 */
int _strlen(char *s)
{
	int a;

	for (a = 0; s[a] != 0; a++)
	{}
	return (a);
}
