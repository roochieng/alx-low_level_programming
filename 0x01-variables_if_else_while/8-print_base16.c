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
	char b = '0';
	int i;


	for (i = 0; i < 10; i++)
	{
		putchar(b);
		b++;
	}
	b = '1';
	for (i = 0; i < 6; i++)
	{
		putchar('0' + b);
		b++;
	}
	putchar('\n');
	return (0);
}
