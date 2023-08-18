#include "main.h"

/**
 * printf_sstring - Prints a string
 * @l: list of arguments
 * Return: num of characters printed.
 */

int printf_sstring(va_list l)
{
	int x;
	char *string;

	string = va_arg(l, char *);
	if (string == NULL)
		string = "(null)";
	for (x = 0; string[x] != '\0'; x++)
		_putchar(str[x]);
	return (x);
}
