#include "main.h"

/**
 * printf_unsigned_int - Prints Unsigned integers
 * @l: List of all of the argumets
 * Return: a count of the numbers
 */

int printf_unsigned_int(va_list l)
{
	unsigned int number;

	number = va_arg(l, unsigned int);

	if (number == 0)
		return (printf_unsgined_num(number));

	if (number < 1)
		return (-1);
	return (printf_unsgined_num(number));
}


/**
 * printf_unsgined_num - Prints an unsigned number
 * @x: unsigned integer to be printed
 * Return: The count of numbers printed
 */

int printf_unsgined_num(unsigned int x)
{
	int j;
	int length;
	unsigned int number2;

	j = 1;
	length = 0;

	number2 = x;

	for (; number2 / j > 9; )
		j *= 10;

	for (; j != 0; )
	{
		length += _putchar('0' + number2 / j);
		number2 %= j;
		j /= 10;
	}

	return (length);
}
