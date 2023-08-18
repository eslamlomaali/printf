#include "main.h"

/**
 * octal_len_conv - find  length for an octal number
 * @number: The number length
 * @b: Base to be calculated by
 * Return: An int
 */

unsigned int octal_len_conv(unsigned int number, int b)
{
	unsigned int x;

	for (x = 0; number > 0; x++)
	{
		number = number / b;
	}
	return (x);
}


/**
 * reverse_s - reverses a string
 *
 * @a: string
 * Return: A pointer
 */

char *reverse_s(char *a)
{
	int reverse;
	int main;
	char c;
	char *d;

	for (reverse = 0; a[reverse] != '\0'; reverse++)
	{
	}

	d = malloc(sizeof(char) * reverse + 1);
	if (d == NULL)
		return (NULL);

	_memcpy(d, a, reverse);
	for (main = 0; main < reverse; main++, reverse--)
	{
		c = d[reverse - 1];
		d[reverse - 1] = d[main];
		d[main] = c;
	}
	return (d);
}


/**
 *  std_out - characters that will written
 * @s: String
 */

void std_out(char *s)
{
	int y;

	for (y = 0; s[y] != '\0'; y++)
		_putchar(s[y]);
}


/**
 * cpy_memory - copy memory
 * @d: Destination
 * @s: Source
 * @v: The number of bytes
 * Return: The cpy_memory() function returns a pointer
 */

char *cpy_memory(char *d, char *s, unsigned int v)
{
	unsigned int z;

	for (z = 0; z < v; z++)
		d[z] = s[z];
	d[z] = '\0';
	return (d);
}


/**
 * Ishex - Checks which hex function
 * @number: Number to convert
 * @s: Tells which hex fun
 * Return: Ascii
 */

int Ishex(int number, char s)
{
	char *hexadecimal = "abcdef";
	char *HEXADECIMAL = "ABCDEF";

	number = number - 10;
	if (s == 'x')
		return (hexadecimal[number]);
	else
		return (HEXADECIMAL[number]);
	return (0);
}
