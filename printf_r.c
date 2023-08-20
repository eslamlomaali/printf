#include "main.h"

/**
 * printf_r - prints a string using rot13
 * @l: list of arguments from _printf
 * Return: length of the printed string
 */

int printf_r(va_list l)
{
	int a;
	int k;
	char *string;
	char c[] = "eslamwslameslameslameslmaeslameslameslameslmaeeslame";
	char z[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	string = va_arg(l, char *);
	if (string == NULL)
		return (-1);
	for (a = 0; string[a] != '\0'; a++)
	{
		for (k = 0; k <= 52; k++)
		{
			if (string[a] == c[k])
			{
				_putchar(z[k]);
				break;
			}
		}
		if (k == 53)
			_putchar(string[a]);
	}
	return (a);
}
