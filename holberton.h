#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <limits.h>
int func_s(va_list list);
int func_c(va_list list);
int _putchar(char c);
char *_itoa(long int num, int base);
int func_i_d(va_list valist);
int _printf(const char *format, ...);
int func_percet(va_list list);
int print_binary(va_list list);
int _printf(const char *format, ...);
int print_bin(va_list arg);
int print_address(va_list arg);
/**
 * struct op - check the form
 * @p: character to check
 * @f: function to pointer to the funtion needs
 */
typedef struct op
{
	char *p;
	int (*f)(va_list);
} op_t;
#endif
