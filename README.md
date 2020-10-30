# Printf project

_This project is how build our own printf function in C Programming Language

# Description of the function
The function in the _printf generate an output depending of the format delivered in the file main, the _printf function works with a specification introduced by the character '%' and the letter after of it.
The  format  string  is a character string, each conversion specification is introduced by the character %, and ends with a conversion specifier. The arguments must correspond properly with the conversion specifier.

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