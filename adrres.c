#include "holberton.h"
/**
 * print_address - function to print in hexadecimal a memory address
 * @arg: the argument to be printed
 * Return: amount of bytes printed
 */
int print_address(va_list arg)
{
	long int pos = 0, bytes = 0;
	unsigned long int number;
	int hexa[1000];

	number = va_arg(arg, unsigned long int);
	if (number == 0)
	{
		write(1, "(nil)", 5);
		return (5);
	}
	else
	{
		_putchar(48);
		_putchar(120);
		bytes += 2;
		for ( ; number > 0; pos++)
		{
			hexa[pos] = number % 16;
			number /= 16;
		}
		hexa[pos] = number % 16;
		for (pos = pos - 1; pos >= 0; pos--)
		{
			if (hexa[pos] > 9)
			{
				_putchar(hexa[pos] + 87);
				bytes++;
			}
			else
			{
				_putchar(hexa[pos] + 48);
				bytes++;
			}
		}
	}
	return (bytes);
}
