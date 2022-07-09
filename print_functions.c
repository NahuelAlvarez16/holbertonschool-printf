#include "main.h"
/**
 * print_string - print all characters of arg variable
 * @arg: is a string
 * Return: return length of arg variable
 */
int print_string(va_list arg)
{
	int i;
	char *src = va_arg(arg, char *);

	for (i = 0; src && src[i]; i++)
		_putchar(src[i]);
	return (i);
}
/**
 * print_char - print a char
 * @arg: is a char
 * Return: return 1
 */
int print_char(va_list arg)
{
	_putchar(va_arg(arg, int));
	return (1);
}
/**
 * print_percentage - print a percentage character
 * Return: return 1
 */
int print_percentage(void)
{
	_putchar('%');
	return (1);
}