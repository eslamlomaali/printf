#include "main.h"

/**
 * printf_SString - print string.
 * @value: argument .
 * Return: the length of the string.
 */

int printf_SString(va_list value)
{
	register short length = 0;
	char *r, *a = va_arg(value, char *);
	int i;

	if (!a)
		return (_puts(NULL_STRING));

	for (i = 0; a[i]; i++)
	{
		if (NotAlpha(a[i]))
		{
			int c = 0;

			c += _puts("\\x");
			r = con(a[i], 16, 0);
			if (!r[1])
				length += _putchar('0');
			length += _puts(r);
			free(r);
		}
		else
		{
			length += _putchar(a[i]);
		}
	}
	return (length);
}
/**
 * NotAlpha - determines if char is a non-
 * alphanumeric
 * @s: input char
 * Return: true or false
*/

int NotAlpha(char s)
{
	return ((s > 0 && s < 32) || s >= 127);
}

/**
 * con - converts number
 * @number: input
 * @b: input
 * @l: flag
 * Return: result string
 */

char *con(unsigned long int number, int b, int l)
{
	static char *r;
	static char a[50];
	char *p;

	r = (l)
		? "0123456789abcdef"
		: "0123456789ABCDEF";
	p = &a[49];
	*p = NUL;
	do {
		*--p = r[number % b];
		number /= b;
	} while (number);

	return (p);
}
