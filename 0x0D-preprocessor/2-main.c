#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the name of the file it was compiled from
 * @argc: len of array
 * @argv: each array item
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
}
