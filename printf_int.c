#include "main.h"

/**
 * printf_int - Prints an integer
 * @l: list of arguments
 * Return: num of characters printed.
 */

int printf_int(va_list l)
{
	int nlen;

	nlen = print_number(l);
	return (nlen);
}


/**
 * print_number - prints a number
 * @a: List of arguments
 * Return: The number of argument.
 */

int print_number(va_list a)
{
	int c;
	int j;
	int length;
	unsigned int number;

	c  = va_arg(a, int);
	j = 1;
	length = 0;

	if (c < 0)
	{
		length += _putchar('-');
		number = c * -1;
	}
	else
		number = c;

	for (; number / j > 9; )
		j *= 10;

	for (; j != 0; )
	{
		length += _putchar('0' + number / j);
		number %= j;
		j /= 10;
	}

	return (length);
}
