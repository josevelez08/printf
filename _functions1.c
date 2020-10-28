#include "header.h"
/**
 * _putchar - the main function for _printf
 * @c: character for printf
 * Return: numbers of characters printed
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
/**
 * func_c - characters
 * @list: arguments variables
 * Return: numbers of characters printed
 */
int func_c(va_list list)
{
char c;
c = va_arg(list, int);
_putchar(c);
return (1);
}
/**
 * func_s - strings
 * @list: source
 * Return: numbers of characters printed
 */
int func_s(va_list list)
{
char *s;
int iter = 0, count = 0;

s = va_arg(list, char *);
if (s == NULL)
{
	s = "(null)";
}
while (s[iter] != '\0')
{
	_putchar(s[iter]);
	iter++;
	count++;
}
return (count);
}
