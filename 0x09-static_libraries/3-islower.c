#include "main.h"
/**
 * _islower - checks for lower case character for intiger i
 * @i: character to compare
 *
 * Return: 1 if c is lowercase, 0 otherwise
 *
 */
int _islower(int i)
{
	if (i >= 'a' && i <= 'z')
	{
		return (1);
	}
	return (0);
}
