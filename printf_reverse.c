#include "main.h"

/**
 * printf_reverse - prints a string in reverse
 * @l: argument from _printf
 * Return: length of the printed string
 */

int printf_reverse(va_list l)
{
	int x = 0, z;
	char *c = va_arg(l, char *);

	if (!c)
		c = "(null)";

	while (c[x])
		x++;

	for (z = x - 1; z >= 0; z--)
		_putchar(c[z]);

	return (x);
}
