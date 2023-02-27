#include "main.h"
#include "2-strlen.c"
/**
 * rev_string - reverses string
 * @s: string
 * Return: reversed string
 */
void rev_string(char *s)
{
	int b;
	char c = s[0];
	int count = 0;

	while (s[count] != 0)
	{
		count++;
	}
	for (b = 0; b < count; b++)
	{
		count--;
		c = s[i];
		s[i] = s[count];
		s[count] = c
	}
}
