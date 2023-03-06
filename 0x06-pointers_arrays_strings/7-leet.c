#include "main.h"

/**
 * leet - encode a string into 1337
 * @s: string
 * Return: encoded string `s`
 */
char *leet(char *s)
{
	int i, j;
	char let[] = "aAeEoOtTlL";
	char num[] = "4433007711";

	i = 0;
	while (s[i] != 0)
	{
		j = 0;
		while (let[j] != '\0')
		{
			if (s[i] == let[j])
				s[i] = num[j];
			j++;
		}
		i++;
	}
	return (s);
}
