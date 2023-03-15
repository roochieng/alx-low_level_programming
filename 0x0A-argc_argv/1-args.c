#include "main.h"
#include <stdio.h>
#define UNUSED(x) (avoid)(x)
/**
 * main - print numnber of arguments
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	UNUSED(*argv);
	printf("%d\n", argc);
	return (0);
}
