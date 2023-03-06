#include "main.h"
/**
 * _strpbrk - search string for any of a set bytes
 * @s: string
 * @accept: bytes
 * Return: 0
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	if (needle[0] == '\0')
		return (haystack);

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0])
		{
			for (j = 0; needle[j] != '\0'; j++)
			{
				if (haystack[i + j] != needle[j])
					break;
			}
			if (needle[j] == '\0')
				return (haystack + i);
		}

	}
	return ('\0');
}
