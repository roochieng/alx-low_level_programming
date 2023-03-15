#include "main.h"
#include <stdio.h>
/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: arguments
 * Return: 1 on error and 0 on success
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		pritf("Error\n");
		return (1);
	}
	printf("%d\n", argv[1] * argv[2]);
	return (0);
}
