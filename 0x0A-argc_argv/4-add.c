#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - add positive nums
 * @argc: number of arguments
 * @argv: arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	if (argc == 1)
	{
		printf("%d\n", 0);
	}
	for (i = 1; i < argc; i++)
	{
		if (atoi(i))
		{
			i += i;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", i);
	return (0);
}
