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
 * print_number_recursion - print a number in recursion
 * @number: Number to be printed
 * @sign: 0 - @number is negative | 1 - @number is positive
 * Return: Length
 */
int print_number_recursion(unsigned int number, int sign)
{
	int length = 0;

	if (!sign)
	{
		_putchar('-');
		length++;
	}
	if (number / 10)
	{
		length += print_number_recursion(number / 10, 1);
		_putchar(number % 10 + '0');
		return (length + 1);
	}
	_putchar(number % 10 + '0');
	return (1);
}
/**
 * print_integer - prints an integer
 * @arg: arguments
 * Return: an integer
 */
int print_integer(va_list arg)
{
	int number = va_arg(arg, int);

	return (print_number_recursion(number < 0 ? -number : number, number >= 0));
}
