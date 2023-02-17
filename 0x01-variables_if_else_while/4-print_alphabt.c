#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - entry point
 *
 * Return: alway returns 0
 *
 */

int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		if (i == 'q' || i == 'e')
		{
			continue;
		}
		putchar(i);
	putchar('\n');
	return (0);
}
