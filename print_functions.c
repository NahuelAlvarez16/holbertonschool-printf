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
/**
 * print_number_recursion - print nu,ber
 * @s: int
 * Return: lengt0h
 * unsigned int.
 */
unsigned int print_number_recursion(int s)
{
	int i = 0;

	if (s / 10)
	{
		if (s < 0)
		{
			_putchar('-');
			i++;
			s = -(s);
		}
		i += print_number_recursion(s / 10);
		_putchar(s % 10 + '0');
		return (i + 1);
	}
	_putchar(s % 10 + '0');
	return (1);
}
/**
 * print_integer - prints an integer
 * @arg: arguments
 * Return: an integer
 */
int print_integer(va_list arg)
{
	return (print_number_recursion(va_arg(arg, int)));
}
