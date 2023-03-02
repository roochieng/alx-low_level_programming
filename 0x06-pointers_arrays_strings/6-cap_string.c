#include "main.h"
/**
 * cap_string - capitalize all words in a string
 * @str: string
 * Return: Capitalized
 */
char *cap_string(char *str)
{
	int i, j;
	int trigger;
	char seps[] = ",;.!?(){}\n\t\" ";

	for (i = 0, trigger = 0; str[i] != '\0'; i++)
	{
		if (str[0] > 96 && str[0] < 123)
			trigger = 1;
		for (j = 0; seps[j] != '\0'; j++)
		{
			if (seps[j] == str[i])
				trigger = 1;
		}

		if (trigger)
		{
			if (str[i] > 96 && str[i] < 123)
			{
				str[i] -= 32;
				trigger = 0;
			}
			else if (str[i] > 64 && str[i] < 91)
				trigger = 0;
			else if (str[i] > 47 && str[i] < 58)
				trigger = 0;
		}
	}
	return (str);
}
