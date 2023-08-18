#include "main.h"

/**
 * printf_octal - Prints the number in octal base
 * @l: List of all the arguments
 * Return: Number of symbols
 */

int printf_octal(va_list l)
{
	unsigned int number;
	int length;
	char *octal;
	char *string;

	number = va_arg(l, unsigned int);

	if (number == 0)
		return (_putchar('0'));
	if (number < 1)
		return (-1);
	length = octal_len_conv(number, 8);

	octal = malloc(sizeof(char) * length + 1);
	if (octal == NULL)
		return (-1);
	for (length = 0; number > 0; length++)
	{
		octal[length] = (number % 8) + 48;
		number = number / 8;

	}
	octal[length] = '\0';
	string = reverse_s(octal);
	if (string == NULL)
		return (-1);

	std_out(string);
	free(octal);
	free(string);
	return (length);
}
