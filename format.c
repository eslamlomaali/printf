#include "main.h"

/**
 * format_rec - Receives the main string
 * @form: A string have all char
 * @function_list: A list of functions.
 * @argument_list: A list containing all the args
 * Return: num of characters that printed.
 */

int format_rec(const char *form, conver_t function_list[],
		va_list argument_list)
{
	int x, y, z, p;

	p = 0;
	for (x = 0; form[x] != '\0'; x++)
	{
		if (form[x] == '%')
		{
			for (y = 0; function_list[y].sym != NULL; y++)
			{
				if (form[x + 1] == function_list[y].sym[0])
				{
					z = function_list[y].f(argument_list);
					if (z == -1)
						return (-1);
					p += z;
					break;
				}
			}
			if (function_list[y].sym == NULL && form[x + 1] != ' ')
			{
				if (form[x + 1] != '\0')
				{
					_putchar(form[x]);
					_putchar(form[x + 1]);
					p = p + 2;
				}
				else
					return (-1);
			}
			x = x + 1;
		}
		else
		{
			_putchar(form[x]);
			p++;
		}
	}
	return (p);
}
