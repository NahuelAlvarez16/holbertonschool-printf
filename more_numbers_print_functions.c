#include "main.h"
/**
 * print_octal - Print an integer in octal base
 * @arg: Integer
 * Return: Number printing length
 */
int print_octal(va_list arg)
{
	int number = va_arg(arg, int);
	int octal_number = 0;
	int i = 0;

	for (i = 0; i < number; i++)
	{
		octal_number++;
		if ((octal_number % 10) == 8)
		{
			octal_number += 2;
		}
	}
	return (print_number_recursion(octal_number, 1));
}
/**
 * print_hexadecimal - Print an integer in base hexadecimal
 * @number: Integer
 * @uppercase: 1 - Print in uppercase | 0 - Print in lowercase
 * Return: Number printing length
 */
int print_hexadecimal(int number, int uppercase)
{
	int length = 0;

	for (; length < (number / 16) + 1; length++)
	{
		int result = number % 16;

		if (result < 10)
			_putchar(48 + result);
		else
			_putchar((uppercase ? 55 : 87) + result);
		number = number / 16;
	}
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
