#include "main.h"

/**
 * printf_p - Prints a percent symbol
 * @l: list of arguments
 * Return: number of characters printed.
 */
int printf_p(__attribute__((unused))va_list l)
{
	_putchar('%');
	return (1);
}
