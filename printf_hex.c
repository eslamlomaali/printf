#include "main.h"

/**
 * printf_hex - prints an hexgecimal number.
 * @number: arguments.
 * Return: counter.
 */

int printf_hex(unsigned long int number)
{
	long int i;
	long int *a;
	long int count = 0;
	unsigned long int z = number;

	while (number / 16 != 0)
	{
		number /= 16;
		count++;
	}
	count++;
	a = malloc(count * sizeof(long int));

	for (i = 0; i < count; i++)
	{
		a[i] = z % 16;
		z /= 16;
	}
	for (i = count - 1; i >= 0; i--)
	{
		if (a[i] > 9)
			a[i] = a[i] + 39;
		_putchar(a[i] + '0');
	}
	free(a);
	return (count);
}
