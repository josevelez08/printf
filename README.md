# Printf project

_This project is how build our own printf function in C Programming Language

# Description of the function
The function in the _printf generate an output depending of the format delivered in the file main

The _printf function works with a specification introduced by the character '%' and the letter after of it

### Starting

_You should clone this repository in your machine and after compile it
with: gcc -Wall -Werror -Wextra -pedantic *.c

### The specification
Specifier|Output|Format
---|---|---
c|Prints a single character|%c
s|Prints a string of characters|%s
d|Prints a signed decimal integer|%d
i|Prints a signed decimal integer|%i
%|Prints a symbol of percent|%%

Example:
```
int main() 
{
	char c = 'H';
	_printf("%c\n", c);
	return (0);
}