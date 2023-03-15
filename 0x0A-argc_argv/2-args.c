#include "main.h"
#include <stdio.h>
/**
 * main - print out arguments
 * @argc: number of arguments
 * @argv: aruments array
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;
	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
