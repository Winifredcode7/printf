#include "main.h"
#include <unistd.h>
/**
 * _putchar - helper function that prints single character.
 * @str: input character.
 * Return: printed value.
 */
int _putchar(char *str)
{
	return (write(1, &str, 1));
}
