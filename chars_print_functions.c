#include "main.h"
/**
 * print_string - print all characters of arg variable
 * @arg:  string
 * Return: return length of arg variable
 */
int print_string(va_list arg)
{
	int i;
	char *src = va_arg(arg, char *);

	if (!src)
		src = "(null)";
	for (i = 0; src && src[i]; i++)
		_putchar(src[i]);
	return (i);
}
/**
 * print_char - print a char
 * @arg: is a char
 * Return: 1
 */
int print_char(va_list arg)
{
	_putchar(va_arg(arg, int));
	return (1);
}
