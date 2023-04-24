#include "main.h"
/**
 * _isdigit - helper function to check the input char
 * @str: input string..
 * Return: 1 if the input is digit.
 */
int _isdigit(char *str)
{
	if (str >= '0' && str <= '9')
	{
		return (1);
	}
	else
	{
	return (0);
	}
}
