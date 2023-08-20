#include "main.h"

/**
 * printf_pointer - prints an hexgecimal number.
 * @value: arguments.
 * Return: counter.
 */

int printf_pointer(va_list value)
{
	void *p;
	char *c = "(nil)";
	long int a;
	int y;
	int z;

	p = va_arg(value, void*);
	if (p == NULL)
	{
		for (z = 0; c[z] != '\0'; z++)
		{
			_putchar(c[z]);
		}
		return (z);
	}

	a = (unsigned long int)p;
	_putchar('0');
	_putchar('x');
	y = printf_hex(a);
	return (y + 2);
}
