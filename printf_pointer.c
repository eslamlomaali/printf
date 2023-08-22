#include "main.h"
/**
 * printf_pointer - prints an hexadecimal representation of a pointer.
 * @value: argument.
 * Return: counter.
 */
int printf_pointer(va_list value)
{
	void *p;
	char *c = "(nil)";
	unsigned long int num_addrs;
	char map_to[] = "0123456789abcdef";
	int z, length;
	char hex_buffer[50];
	int ind = sizeof(hex_buffer) - 1;

	p = va_arg(value, void*);
	if (p == NULL)
	{
		for (z = 0; c[z] != '\0'; z++)
		{
			_putchar(c[z]);
		}
		return (z);
	}

	num_addrs = (unsigned long int)p;

	_putchar('0');
	_putchar('x');

	hex_buffer[ind] = '\0';

	while (num_addrs > 0)
	{
		hex_buffer[--ind] = map_to[num_addrs % 16];
		num_addrs /= 16;
	}

	length = sizeof(hex_buffer) - ind - 1;
	for (; ind < (int)sizeof(hex_buffer) - 1; ind++)
	{
		_putchar(hex_buffer[ind]);
	}

	return (length + 2);
}
