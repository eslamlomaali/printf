#include "main.h"

/**
 * printf_C - Prints character
 * @l: list of arguments
 * Return: num of characters
 */

int printf_C(va_list l)
{
	_putchar(va_arg(l, int));
	return (1);
}
