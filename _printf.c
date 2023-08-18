#include "main.h"

/**
 * _printf - Receives the string
 * @format: A string have characters
 * Return: A number  of the characters printed
 */

int _printf(const char *format, ...)
{
	int p;
	conver_t function_list[] = {
		{"%", printf_p},
		{"d", printf_int},
		{"i", printf_int},
		{"c", printf_char},
		{"s", printf_sstring},
		{"b", printf_b},
		{"u", printf_unsigned_int},
		{"o", printf_octal},
		{"x", printf_hexadecimal},
		{"X", printf_HEXADECIMAL},
		{"S", printf_SString},
		{"p", printf_pointer},
		{"r", printf_reverse},
		{"R", printf_r},
		{NULL, NULL},
	};
	va_list argument_list;

	if (format == NULL)
		return (-1);

	va_start(argument_list, format);
	p = format_rec(form, conver_t function_list[], argument_list);
	va_end(argument_list);
	return (p);
}
