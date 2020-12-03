#include "holberton.h"

/**
 * print_bin - Print a number in base 2
 * @arg: Number to print in base 2
 *
 * Return: Length of the numbers in binary
 **/
int print_bin(va_list arg)
{
	int pos = 0, bytes = 0;
	unsigned int number;
	int bin[1000];

	number = va_arg(arg, int);
	if (number == 0)
	{
		_putchar(48);
		bytes++;
	}
	else
	{
		for ( ; number > 0; pos++)
		{
			bin[pos] = number % 2;
			number /= 2;
		}
		bin[pos] = number % 2;
		for (pos = pos - 1; pos >= 0; pos--)
		{
			_putchar(bin[pos] + 48);
			bytes++;
		}
	}
	return (bytes);
}
