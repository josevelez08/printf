#include "holberton.h"
/**
 * _printf - learning how works printf
 * @format: source
 * Return: 0 always
 */
int _printf(const char *format, ...)
{
	op_t ops[] = {
		{"c", func_c},
		{"s", func_s},
		{"i", func_i_d},
		{"d", func_i_d},
		{"%", func_percet},
		{NULL, NULL}
	};
	va_list list;
	int iteradorf = 0;
	int iteradorops = 0;
	int contador = 0;

	va_start(list, format);

	if (format == NULL)
	{ return (-1); }
	while (format[iteradorf] != '\0')
	{
		if (format[iteradorf] == '%')
		{ iteradorf++;
			while (iteradorops < 6)
			{
				if (iteradorops == 5)
				{ _putchar('%');
				contador++; }
				else if (*(ops[iteradorops].p) == format[iteradorf])
				{ contador = contador + ops[iteradorops].f(list);
				iteradorf++;
				iteradorops = 6;
					break; }
				iteradorops++; } } else
		{ _putchar(format[iteradorf]);
		iteradorf++;
		contador++; }
		iteradorops = 0;
	};
	va_end(list);
	return (contador);
}
