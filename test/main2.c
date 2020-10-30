#include "holberton.h"

int main(void) {

    int len;
    int len2;


    len = _printf("Let's try to printf a simple sentence.\n");
		 _printf("Length:[%d, %i]\n", len, len);
		  _printf("Negative:[%d]\n", -762534);
			_printf("Character:[%c]\n", 'H');
			_printf("String:[%s]\n", "I am a string !");
			len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    _printf("Unknown:[%r]\n");
    printf("Unknown:[%r]\n");
	_printf("There is %d bytes in %d KB\n", 1024, 1);
		return 0;
}