#include "holberton.h"
/**
 * func_i_d - print an integer
 * @valist: characters
 * Return: numbers of characters to print
 */
int func_i_d(va_list valist)
{
	long int n, i;
	char *ptr;

	n = va_arg(valist, int);

	ptr = _itoa(n, 10);

	for (i = 0; ptr[i] != '\0'; i++)
	{
		_putchar(ptr[i]);
	}
	return (i);
}
/**
 * _itoa - convert an int to character for can pass to write
 * @num: the number to print
 * @base: 10
 * Return: numbers of characters to print
 */
char *_itoa(long int num, int base)
{
	static char *array = "0123456789abcdef";
	static char buffer[50];
	char sign = 0;
	char *ptr;
	unsigned long n = num;

	if (num < 0)
	{
		n = -num;
		sign = '-';
	}
	ptr = &buffer[49];
	*ptr = '\0';

	do      {
		*--ptr = array[n % base];
		n /= base;
	} while (n != 0);

	if (sign)
		*--ptr = sign;
	return (ptr);
}
/**
 * func_percet - print one percent
 * @list: characters
 * Return: numbers of characters to print
 */
int func_percet(va_list list __attribute__((unused)))
{
	_putchar('%');
	return (1);
}
