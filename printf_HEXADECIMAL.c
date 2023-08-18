#include "main.h"

/**
 *  printf_HEXADECIMAL - Prints a representation of a decimal num .
 * @l: List of the arguments
 * Return: Number of characters
 */

int  printf_HEXADECIMAL(va_list l)
{
	unsigned int number;
	int length;
	int number2;
	char *hex;
	char *hex2;

	number = va_arg(l, unsigned int);

	if (number == 0)
		return (_putchar('0'));
	if (number < 1)
		return (-1);
	length = octal_len_conv(number, 16);
	hex = malloc(sizeof(char) * length + 1);
	if (hex == NULL)
		return (-1);
	for (length = 0; number > 0; length++)
	{
		number2 = number % 16;
		if (number2 > 9)
		{
			number2 = Ishex(number2, 'X');
			hex[length] = number2;
		}
		else
			hex[length] = number2 + 48;
		number = number / 16;
	}
	hex[length] = '\0';
	hex2 = reverse_s(hex);
	if (hex2 == NULL)
		return (-1);
	std_out(hex2);
	free(hex);
	free(hex2);
	return (length);
}
