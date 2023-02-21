#include "main.h"
/**
 * print_alphabet_x10 - prints alphabets times 10 without printf
 *
 * Return: Always 0
 *
 */
void print_alphabet_x10(void)
{
	int count = 0;
	char i;

	while (count < 10; count++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		putchar('\n');
	}
}
