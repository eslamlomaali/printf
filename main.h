#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>

#define NULL_STRING "(null)"
#define NUL '\0'

/**
 * struct convert - the  structure
 *
 * @sym: The operator
 * @f: The function associated
 */

struct convert
{
	char *sym;
	int (*f)(va_list);
};
typedef struct convert conver_t;


int _printf(const char *format, ...);
int _putchar(char c);
int format_rec(const char *form, conver_t function_list[], va_list argument_list);
int printf_p(va_list);
int printf_int(va_list);
int printf_C(va_list);
int printf_sstring(va_list);
int printf_b(va_list);
int printf_unsigned_int(va_list);
int printf_octal(va_list l);
int printf_hexadecimal(va_list l);
int printf_HEXADECIMAL(va_list l);
int printf_SString(va_list value);
int printf_pointer(va_list value);
int printf_reverse(va_list l);
int printf_r(va_list l);

int print_number(va_list a);
unsigned int octal_len_conv(unsigned int, int);
char *reverse_s(char *);
void std_out(char *s);
char *cpy_memory(char *d, char *s, unsigned int v);
int printf_unsgined_num(unsigned int x);
int Ishex(int number, char s);
int printf_hex(unsigned long int number);
int NotAlpha(char s);
int _puts(char *string);
char *con(unsigned long int number, int b, int l);
#endif
