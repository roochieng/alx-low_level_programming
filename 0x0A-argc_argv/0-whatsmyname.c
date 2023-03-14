#include "main.h"
#include <stdlib.h>
#define UNUSED(x) (void)(x)
/**
 * main - main funtion that prints itself
 * @argv: arguments
 * @argc: argument idexes
 * Return: 0
 */
void main(int argc, char *argv[])
{
	UNUSED(argc);
	printf("%s\n", argv[0]);
	return (0)
}
