#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - entry point
*
* Return: always return 0
*
*/
int main(void)
{
	int n;
	int lastd;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastd = n % 10;
	if (lastd > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lastd);
	} else if (lastd == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lastd);
	} else
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lastd);
	}
	return (0);
}
