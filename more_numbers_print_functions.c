#include "main.h"
/**
 * print_octal_recursion - Print an integer in octal base
 * @number: Integer
 * Return: Number priting length
 */
int print_octal_recursion(unsigned int number)
{
	int length = 0;

	if (number > 7)
		length += print_octal_recursion(number / 8);
	_putchar(48 + (number % 8));
	length++;
	return (length);
}
/**
 * print_octal - Print an integer in octal base
 * @arg: Integer
 * Return: Number printing length
 */
int print_octal(va_list arg)
{
	return (print_octal_recursion(va_arg(arg, int)));
}
/**
 * print_hexadecimal - Print an integer in base hexadecimal
 * @number: Integer
 * @uppercase: 1 - Print in uppercase | 0 - Print in lowercase
 * Return: Number printing length
 */
int print_hexadecimal(unsigned int number, int uppercase)
{
	int length = 0;
	int result = number % 16;

	if (number > 16)
		length += print_hexadecimal(number / 16, uppercase);
	if (result < 10)
		_putchar(48 + result);
	else
		_putchar((uppercase ? 55 : 87) + result);
	length++;
	return (length);
}
/**
 * print_hexadecimal_lowercase- Print an integer in base hexadecimal(lowercase)
 * @arg: Integer
 * Return: Number printing length
 */
int print_hexadecimal_lowercase(va_list arg)
{
	return (print_hexadecimal(va_arg(arg, int), 0));
}
/**
 * print_hexadecimal_uppercase- Print an integer in base hexadecimal(uppercase)
 * @arg: Integer
 * Return: Number printing length
 */
int print_hexadecimal_uppercase(va_list arg)
{
	return (print_hexadecimal(va_arg(arg, int), 1));
}
