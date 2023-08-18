#include "main.h"

/**
 * printf_b - Converts a number from base 10 to binary
 * @l: List of arguments passed to this function
 * Return: The length of the number printed
 */

int printf_b(va_list l)
{
	unsigned int number;
	int i, length;
	char *string;
	char *string2;

	number = va_arg(l, unsigned int);
	if (number == 0)
		return (_putchar('0'));
	if (number < 1)
		return (-1);
	length = octal_len_conv(number, 2);
	string = malloc(sizeof(char) * length + 1);
	if (string == NULL)
		return (-1);

	for (i = 0; number > 0; i++)
	{
		if (number % 2 == 0)
			string[i] = '0';
		else
			string[i] = '1';
		number = number / 2;
	}
	string[i] = '\0';
	string2 = reverse_s(string);
	if (string2 == NULL)
		return (-1);
	std_out(string2);
	free(string);
	free(string2);
	return (length);
}
