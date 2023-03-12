#include "main.h"
/**
 * _isalpha - checks for aphabetic character
 *
 * @a: character to compare
 *
 * Return: 1 if a is a letter or 0 if otherwise
 *
 */
int _isalpha(int a)
{
	if ((a >= 'A' && a <= 'Z') || (a >= 'a' && a <= 'z'))
	{
		return (1);
	}
	return (0);
}
