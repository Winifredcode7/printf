#include "#main.h"
/**
 * _strlen - a helper function that count digits.
 * @str: input test string.
 * Return: number of digits.
 */

int _strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
