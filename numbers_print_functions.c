#include "main.h"
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
	length++;
	return (length);
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
/**
 * print_binary_recursion - Convert a decimal number to binary and print it
 * @number: Decimal number
 * Return: Length of @number in binary
 */
int print_binary_recursion(unsigned int number)
{
	int length = 0;

	if (number > 1)
		length += print_binary_recursion(number / 2);
	_putchar(number % 2 == 0 ? '0' : '1');
	length++;
	return (length);
}
/**
 * print_binary - Convert a decimal number to binary and print it
 * @arg: Decimal number
 * Return: Length of @arg in binary
 */
int print_binary(va_list arg)
{
	return (print_binary_recursion(va_arg(arg, int)));
}
/**
 * print_unsigned_integer - Print an unsigned integer
 * @arg: Unsigned integer
 * Return: Number printing length
 */
int print_unsigned_integer(va_list arg)
{
	return (print_number_recursion(va_arg(arg, int), 1));
}
