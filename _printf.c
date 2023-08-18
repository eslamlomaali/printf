#include "main.h"

/**
 * _printf -  printf codeing
 * @format: the format
 * Return: string
 */

int _printf(const char *format, ...)
{
	int p = 0;

	va_list va;

	va_start(va, format);

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			p = selector(format, va, p);
			format++;
		}
		else
		{
			_putchar(*format);
			p++;
			format++;
		}
	}
	va_end(va);
	return (p);
}
