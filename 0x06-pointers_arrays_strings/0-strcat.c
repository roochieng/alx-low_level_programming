#include "mian.h"
#include "2-strlen.c"
#include "9-strcpy.c"
/**
 * _strcat - Concatnates two strings
 * @dest: first string
 * @src: second string
 * Return: concatnated string
 */
char *_strcat(char *dest, char *src)
{
	return (&_strcpy(dest, src));
}
