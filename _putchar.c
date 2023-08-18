#include "main.h"

/**
 * _putchar - write the  char c to stdout
 * @c: chhar to print
 *
 * Return: success 1
 * error: return -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 * _puts - prints a string to stdout
 * @string: pointer to the string to print
 * Return: number of chars written
 */
int _puts(char *string)
{
	register short i;

	for (i = 0; string[i]; i++)
		_putchar(string[i]);
	return (i);
}
