#include "main.h"

/**
 * _putchar - write the  char c to stdout
 * @c: chhar to print
 *
 * Return: success 1
 * error: return -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
