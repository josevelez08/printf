#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
int func_s(va_list list);
int func_c(va_list list);
int _putchar(char c);
int _printf(const char *format, ...);
typedef struct op
{
  char *p;
  int (*f)(va_list);
}op_t;
#endif