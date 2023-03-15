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
	int result = 0;
	bool a = true

	if (argc == 1)
	{
		printf("%d\n", result);
	}
	for (i = 1; i < argc; i++)
	{
		if (atoi(argv[i]) == a)
		{
			result += atoi(argv[i]);
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
