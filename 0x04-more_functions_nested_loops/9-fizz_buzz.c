#include <stdio.h>
#include "main.h"
/**
 * fizzbuzz - prints 1-100 with multiples of 3 and 5 replaced
 * Return: 0
 */
int fizzbuzz(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		printf("%d ", i);
	}
	printf("\n");
	return (0);
}
